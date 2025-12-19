// Load layout
let layout = [];
fetch('layout.json')
  .then(response => response.json())
  .then(data => {
    layout = data.layout;
    initApp();
  });

let layers = [];
let currentLayer = 0;
const maxLayers = 15;

function initApp() {
  // Initialize layers with KC_NO
  for (let i = 0; i < 6; i++) {  // Start with 6 layers
    layers.push(new Array(layout.length).fill('KC_NO'));
  }
  renderLayerTabs();
  renderKeyboard();
  setupEventListeners();
  document.addEventListener('keydown', handleKeyDown);
}

function renderLayerTabs() {
  const tabs = document.getElementById('layer-tabs');
  tabs.innerHTML = '';
  for (let i = 0; i < layers.length; i++) {
    const tab = document.createElement('div');
    tab.className = 'layer-tab' + (i === currentLayer ? ' active' : '');
    tab.textContent = `Layer ${i}`;
    tab.onclick = () => switchLayer(i);
    tabs.appendChild(tab);
  }
  // Add layer button
  if (layers.length < maxLayers) {
    const addTab = document.createElement('div');
    addTab.className = 'layer-tab';
    addTab.textContent = '+';
    addTab.onclick = addLayer;
    tabs.appendChild(addTab);
  }
}

function switchLayer(layerIndex) {
  currentLayer = layerIndex;
  renderLayerTabs();
  renderKeyboard();
}

function addLayer() {
  layers.push(new Array(layout.length).fill('KC_NO'));
  renderLayerTabs();
  switchLayer(layers.length - 1);
}

function renderKeyboard() {
  const keyboard = document.getElementById('keyboard');
  keyboard.innerHTML = '';
  const scale = 65; // pixels per unit, increased for spacing
  layout.forEach((keyData, index) => {
    const key = document.createElement('div');
    key.className = 'key' + (keyData.h ? ' tall' : '');
    key.id = `key-${index}`;
    key.style.left = (keyData.x * scale) + 'px';
    key.style.top = (keyData.y * scale) + 'px';
    if (keyData.h) key.style.height = (keyData.h * scale) + 'px';
    key.textContent = layers[currentLayer][index] || 'KC_NO';
    key.onclick = () => showKeySelector(index);
    keyboard.appendChild(key);
  });
}

let currentKeyIndex = -1;
let favorites = JSON.parse(localStorage.getItem('favorites')) || [];

// Map JS key events to QMK keycodes
const keyMap = {
  'a': 'KC_A', 'b': 'KC_B', 'c': 'KC_C', 'd': 'KC_D', 'e': 'KC_E',
  'f': 'KC_F', 'g': 'KC_G', 'h': 'KC_H', 'i': 'KC_I', 'j': 'KC_J',
  'k': 'KC_K', 'l': 'KC_L', 'm': 'KC_M', 'n': 'KC_N', 'o': 'KC_O',
  'p': 'KC_P', 'q': 'KC_Q', 'r': 'KC_R', 's': 'KC_S', 't': 'KC_T',
  'u': 'KC_U', 'v': 'KC_V', 'w': 'KC_W', 'x': 'KC_X', 'y': 'KC_Y',
  'z': 'KC_Z', '1': 'KC_1', '2': 'KC_2', '3': 'KC_3', '4': 'KC_4',
  '5': 'KC_5', '6': 'KC_6', '7': 'KC_7', '8': 'KC_8', '9': 'KC_9',
  '0': 'KC_0', ' ': 'KC_SPC', 'Enter': 'KC_ENT', 'Backspace': 'KC_BSPC',
  'Tab': 'KC_TAB', 'Escape': 'KC_ESC', 'Shift': 'KC_LSFT', 'Control': 'KC_LCTL',
  'Alt': 'KC_LALT', 'Meta': 'KC_LGUI', 'ArrowUp': 'KC_UP', 'ArrowDown': 'KC_DOWN',
  'ArrowLeft': 'KC_LEFT', 'ArrowRight': 'KC_RGHT'
};

function showKeySelector(index) {
  if (currentKeyIndex !== -1 && currentKeyIndex !== index) {
    document.getElementById(`key-${currentKeyIndex}`).classList.remove('selected');
  }
  currentKeyIndex = index;
  document.getElementById(`key-${index}`).classList.add('selected');
  document.getElementById('key-selector').style.display = 'block';
  document.getElementById('search-input').value = '';
  document.getElementById('custom-keycode').value = '';
  filterKeycodes('');
}

function filterKeycodes(query) {
  const list = document.getElementById('keycode-list');
  list.innerHTML = '';
  let filtered = allKeycodes.filter(kc =>
    kc.code.toLowerCase().includes(query.toLowerCase()) ||
    kc.desc.toLowerCase().includes(query.toLowerCase())
  );
  // Separate favorites and non-favorites
  const favs = filtered.filter(kc => favorites.includes(kc.code));
  const nonFavs = filtered.filter(kc => !favorites.includes(kc.code));
  // Show favorites first, then others, limit to 20
  const sorted = [...favs, ...nonFavs].slice(0, 20);
  sorted.forEach(kc => {
    const item = document.createElement('div');
    item.className = 'keycode-item';
    const star = favorites.includes(kc.code) ? '★' : '☆';
    item.innerHTML = `<span class="star" data-code="${kc.code}">${star}</span> <strong>${kc.code}</strong> - ${kc.desc}`;
    item.onclick = () => selectKeycode(kc.code);
    list.appendChild(item);
  });
}

function selectKeycode(code) {
  layers[currentLayer][currentKeyIndex] = code;
  hideKeySelector();
  renderKeyboard();
}

function hideKeySelector() {
  if (currentKeyIndex !== -1) {
    document.getElementById(`key-${currentKeyIndex}`).classList.remove('selected');
  }
  document.getElementById('key-selector').style.display = 'none';
  currentKeyIndex = -1;
}

function toggleFavorite(code) {
  if (favorites.includes(code)) {
    favorites = favorites.filter(c => c !== code);
  } else {
    favorites.push(code);
  }
  localStorage.setItem('favorites', JSON.stringify(favorites));
}

function handleKeyDown(e) {
  if (currentKeyIndex === -1 || document.activeElement.tagName === 'INPUT') return;
  e.preventDefault();
  const code = keyMap[e.key] || `KC_${e.key.toUpperCase()}`;
  selectKeycode(code);
}

function setupEventListeners() {
  document.getElementById('search-input').oninput = (e) => filterKeycodes(e.target.value);
  document.getElementById('save-keycode').onclick = () => {
    const custom = document.getElementById('custom-keycode').value.trim();
    if (custom) selectKeycode(custom);
  };
  document.getElementById('cancel-keycode').onclick = hideKeySelector;
  document.getElementById('export-btn').onclick = exportKeymap;
  document.getElementById('export-json-btn').onclick = exportJSON;
  document.getElementById('import-btn').onclick = () => document.getElementById('import-file').click();
  document.getElementById('import-file').onchange = importKeymap;
  document.getElementById('keycode-list').addEventListener('click', (e) => {
    if (e.target.classList.contains('star')) {
      e.stopPropagation();
      const code = e.target.dataset.code;
      toggleFavorite(code);
      filterKeycodes(document.getElementById('search-input').value);
    }
  });
}

function exportJSON() {
  const data = {
    layers: layers,
    name: document.getElementById('filename').value.replace('.c', '')
  };
  const blob = new Blob([JSON.stringify(data, null, 2)], { type: 'application/json' });
  const url = URL.createObjectURL(blob);
  const a = document.createElement('a');
  a.href = url;
  a.download = data.name + '.json';
  a.click();
  URL.revokeObjectURL(url);
}

function exportKeymap() {
  const filename = document.getElementById('filename').value || 'keymap.c';
  const content = generateCCode();
  const blob = new Blob([content], { type: 'text/plain' });
  const url = URL.createObjectURL(blob);
  const a = document.createElement('a');
  a.href = url;
  a.download = filename;
  a.click();
  URL.revokeObjectURL(url);
}

function generateCCode() {
  let code = `#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
`;
  layers.forEach((layer, index) => {
    code += `    [${index}] = LAYOUT_split_3x5_3_ex2(
`;
    // Top: 6+6, Middle: 6+6, Bottom: 5+5, Thumbs: 6
    const leftRows = [
      layer.slice(0, 6),
      layer.slice(6, 12),
      layer.slice(12, 17)
    ];
    const rightRows = [
      layer.slice(17, 23),
      layer.slice(23, 29),
      layer.slice(29, 34)
    ];
    const thumbs = layer.slice(34, 40);

    for (let r = 0; r < 3; r++) {
      code += `    //,-----------------------------------------------------. ,-----------------------------------------------------.
`;
      code += `           ${leftRows[r].join(',    ')},    ${rightRows[r].join(',    ')},
`;
    }
    code += `    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
`;
    code += `                                                 ${thumbs.slice(0, 3).join(',   ')},   ${thumbs.slice(3, 6).join(',  ')}
`;
    code += `                                             //\`--------------------------' \`--------------------------'
`;
    code += `    ),
`;
  });
  code += `};
`;
  // Add encoder map placeholder
  code += `
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
`;
  layers.forEach((_, i) => {
    code += `  [${i}] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
`;
  });
  code += `};
#endif
`;
  return code;
}

function importKeymap(event) {
  const file = event.target.files[0];
  if (!file) return;
  const reader = new FileReader();
  reader.onload = (e) => {
    try {
      const data = JSON.parse(e.target.result);
      if (data.layers) {
        layers = data.layers.map(layer => layer || new Array(layout.length).fill('KC_NO'));
        currentLayer = 0;
        renderLayerTabs();
        renderKeyboard();
      }
    } catch (err) {
      alert('Invalid JSON file');
    }
  };
  reader.readAsText(file);
}