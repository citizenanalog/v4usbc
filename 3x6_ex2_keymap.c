#include QMK_KEYBOARD_H
#include "rgb_matrix.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, KC_A, LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,         KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               KC_NO, KC_SPC, OS_LSFT,    TO(1),   KC_SPC,  KC_NO
                                        //`--------------------------'  `--------------------------'
    ),
    // code/sym
    [1] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO, KC_ESC,  KC_AT, KC_HASH,  KC_DLR, KC_PERC,                        KC_CIRC, KC_AMPR, KC_ASTR, KC_SCLN, KC_BSPC, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, KC_TAB, KC_EQL, KC_MINS, KC_DEL, KC_QUOT,                         KC_BSLS, LSFT(KC_LBRC), LSFT(KC_RBRC), KC_PIPE, KC_ENT, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, KC_TILD, KC_GRV, KC_DQUO, KC_UNDS, KC_DQUO,                        KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC,  TO(2), KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             KC_NO, TO(0), KC_LGUI,       TO(3),    KC_SPC,  KC_NO
                                        //`--------------------------'  `--------------------------'
    ),
    // direction/nav
    [2] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO, KC_ESC,  KC_NO,   KC_NO,   TO(4),  TO(5),                          KC_WBAK,  KC_F5,   KC_NO, KC_WFWD, KC_BSPC, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, KC_TAB,  KC_NO, KC_LCTL, KC_LSFT, KC_DEL,                          KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  KC_ENT, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,   TO(3), KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_NO, TO(0), KC_LGUI,    KC_RALT,   KC_SPC,  KC_NO
                                        //`--------------------------'  `--------------------------'
    ),
    // numpad
    [3] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO, KC_ESC, KC_MPLY, KC_MPRV, KC_MNXT, KC_UNDS,                       KC_MINS,    KC_7,    KC_8,    KC_9, KC_BSPC, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, KC_TAB, KC_VOLD, KC_VOLU, KC_LSFT, KC_PLUS,                       KC_EQL,    KC_4,    KC_5,    KC_6,  KC_ENT, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, QK_RBT, KC_ASTR, KC_BRID, KC_BRIU, KC_DOT,                         KC_0,      KC_1,    KC_2,    KC_3,  TO(2), KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_NO, TO(0), KC_LGUI,     KC_RALT, KC_TRNS,  KC_NO
                                        //`--------------------------'  `--------------------------'
    ),

        [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_NO, QK_BOOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                       KC_PSCR,   KC_F7,   KC_F8,   KC_F9,   KC_F12, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_NO, UG_TOGG,  UG_HUEU, UG_SATU, UG_VALU, KC_NO,                       KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F11, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_NO, UG_NEXT,  UG_HUED, UG_SATD, UG_VALD, KC_NO,                       KC_NO,   KC_F1,   KC_F2,   KC_F3   ,KC_F10, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_NO, TO(0), KC_NO,      KC_NO,  KC_NO,  KC_NO
                                        //`--------------------------'  `--------------------------'
    ),
    // kicad keys
    [5] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO, KC_ESC,    KC_W,    KC_E,    KC_R, KC_TRNS,                       KC_NO,    KC_U,   KC_NO, KC_HOME, KC_DEL, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,   KC_A,    KC_S,    KC_D,    KC_F9,    KC_G,                       KC_H,   KC_NO,   KC_NO,    KC_L,   KC_NO, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                       KC_N,    KC_M,   KC_NO,    KC_P,   KC_NO, KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_NO, TO(0), KC_LCTL,    KC_SPC,   KC_RSFT,  KC_NO
                                        //`--------------------------'  `--------------------------'
    )
};
#if defined(COMBO_ENABLE)

/* ─────── Combo definitions ─────── */
enum combo_events {
    COMBO_OP_BSPC,     // O + P  →  Backspace
    COMBO_AS_TAB,      // A + S  →  Tab
    COMBO_OP_ESC,       // W + Q -> Esc
    COMBO_AS_ENT,       // L + ; -> Enter
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

/* Which keys trigger each combo */
const uint16_t PROGMEM combo_op_bspc[] = { KC_O, KC_P, COMBO_END };
const uint16_t PROGMEM combo_op_esc[] = { KC_W, KC_Q, COMBO_END };
const uint16_t PROGMEM combo_as_tab[] = { KC_A, LCTL_T(KC_S), COMBO_END };
const uint16_t PROGMEM combo_as_ent[] = { RCTL_T(KC_L), KC_SCLN, COMBO_END };

/* The combo → key mapping */
combo_t key_combos[] = {
    [COMBO_OP_BSPC] = COMBO_ACTION(combo_op_bspc),
    [COMBO_AS_TAB]  = COMBO_ACTION(combo_as_tab),
    [COMBO_AS_ENT]  = COMBO_ACTION(combo_as_ent),
    [COMBO_OP_ESC]  = COMBO_ACTION(combo_op_esc),
};

/* What actually gets sent when combo fires */
void process_combo_event(uint16_t combo_index, bool pressed) {
    if (!pressed) return;          // only act on press

    switch (combo_index) {
        case COMBO_OP_BSPC:
            tap_code(KC_BSPC);     // O + P → Backspace
            break;
        case COMBO_AS_TAB:
            tap_code(KC_TAB);      // A + S → Tab
            break;
        case COMBO_AS_ENT:
            tap_code(KC_ENT);      // L + ; > Enter
            break;
        case COMBO_OP_ESC:
            tap_code(KC_ESC);      // W + Q > Esc
            break;
    }
}

#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif

// ┌────────────────────────────────────────────────────────────┐
// │ Per-key RGB – light specific keys on specific layers      │
// └────────────────────────────────────────────────────────────┘

bool rgb_matrix_indicators_user(void) {
    // Clear all LEDs first
    rgb_matrix_set_color_all(0, 0, 0);

    uint8_t layer = get_highest_layer(layer_state);

    uint8_t r = 0, g = 0, b = 0;

    // Rainbow progression for layers 0–5
    switch (layer) {
        case 0:  // Red
            r = 255; g = 0;   b = 0;
            rgb_matrix_set_color(14, r, g, b);
            break;

        case 1:  // Orange
            r = 255; g = 127; b = 0;
            rgb_matrix_set_color(26, r, g, b);
            break;

        case 2:  // Yellow
            r = 255; g = 255; b = 0;
            rgb_matrix_set_color(25, r, g, b);
            break;

        case 3:  // Green
            r = 0;   g = 255; b = 0;
            rgb_matrix_set_color(24, r, g, b);
            break;

        case 4:  // Cyan
            r = 0;   g = 255; b = 255;
            rgb_matrix_set_color(24, r, g, b);
            rgb_matrix_set_color(25, r, g, b);
            rgb_matrix_set_color(26, r, g, b);
            break;

        case 5:  // Magenta / Violet
            r = 255; g = 0;   b = 255;
            rgb_matrix_set_color(14, r, g, b);
            rgb_matrix_set_color(24, r, g, b);
            rgb_matrix_set_color(25, r, g, b);
            rgb_matrix_set_color(26, r, g, b);
            break;

        default:
            // Do nothing for layers >5 or transient states
            break;
    }

    return false;
}

