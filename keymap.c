#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    LGUI(KC_1),     LGUI(KC_2),     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          LCTL_T(KC_A),    KC_S, LALT_T(KC_D), LGUI_T(KC_F), KC_G,    LGUI(KC_3),     LGUI(KC_4),     KC_H,    RGUI_T(KC_J), RALT_T(KC_K), KC_L, RCTL_T(KC_SCLN),
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
          LSFT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  LSFT_T(KC_SLSH),
    //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------+--------|
                                                       KC_NO,   KC_SPC,  KC_BSPC,    KC_SPC,  TO(1),KC_NO
                                            //`--------------------------'                    `--------------------------'
    ),
    [1] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_ESC,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_NO,   KC_NO,   KC_CIRC, KC_AMPR, KC_ASTR, KC_SCLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_TAB,  KC_EQL,  KC_MINS, KC_DEL,  KC_QUOT, KC_NO,   KC_NO,   KC_BSLS, LSFT(KC_LBRC), LSFT(KC_RBRC), KC_QUOT, KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_TILD, KC_GRV,  KC_PIPE, KC_UNDS, KC_DQUO, KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, TO(2),
    //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------+--------|
                                                       KC_NO,   TO(0),   KC_LGUI,    KC_SPC,  TO(3),KC_NO
                                            //`--------------------------'                    `--------------------------'
    ),
    [2] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_ESC,  KC_NO,   KC_NO,   TO(4),   TO(5),   KC_NO,   KC_NO,   KC_WBAK, KC_F5,   KC_NO,   KC_WFWD, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_TAB,  KC_NO,   KC_LCTL, KC_LSFT, KC_DEL,  KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  TO(3),
    //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------+--------|
                                                       KC_NO,   TO(0),   KC_LGUI,  KC_SPC,  KC_RALT,KC_NO
                                            //`--------------------------'                    `--------------------------'
    ),
    [3] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_ESC,  KC_MPLY, KC_MPRV, KC_MNXT, KC_UNDS, KC_NO,   KC_NO,   KC_MINS, KC_7,    KC_8,    KC_9,    KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_TAB,  KC_VOLD, KC_VOLU, KC_LSFT, KC_PLUS, KC_NO,   KC_NO,   KC_EQL,  KC_4,    KC_5,    KC_6,    KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          QK_RBT,  KC_ASTR, KC_NO, KC_LCTL, KC_DOT,  KC_0,    KC_1,    KC_2,    KC_3,    TO(2),
    //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------+--------|
                                                       KC_NO,   TO(0),   KC_LGUI,  KC_TRNS, KC_RALT,KC_NO
                                            //`--------------------------'                    `--------------------------'
    ),
    [4] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          QK_BOOT, QK_CLEAR_EEPROM,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PSCR, KC_F7,   KC_F8,   KC_F9,   KC_F12,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          UG_TOGG, UG_HUEU, UG_SATU, UG_VALU, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F11,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          UG_NEXT, UG_HUED, UG_SATD, UG_VALD, KC_NO,   KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F10,
    //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------+--------|
                                                       KC_NO,   TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO
                                            //`--------------------------'                    `--------------------------'
    ),
    [5] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_ESC,  KC_W,    KC_E,    KC_R,    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_U,    KC_NO,   KC_HOME, KC_DEL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_A,    KC_S,    KC_D,    KC_F9,   KC_G,    KC_NO,   KC_NO,   KC_H,    KC_NO,   KC_NO,   KC_L,    KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_NO,   KC_P,    KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------+--------|
                                                       KC_NO,   TO(0),   KC_LCTL, KC_SPC,  KC_RSFT, KC_NO
                                            //`--------------------------'                    `--------------------------'
    )
};

// combo section
#if defined(COMBO_ENABLE)

/* ─────── Combo definitions ─────── */
enum combo_events {
    COMBO_OP_BSPC,     // O + I  →  Backspace
    COMBO_AS_TAB,      // D + S  →  Tab
    COMBO_OP_ESC,       // W + E -> Esc
    COMBO_AS_ENT,       // L + K -> Enter
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

/* Which keys trigger each combo */
const uint16_t PROGMEM combo_op_bspc[] = { KC_O, KC_I, COMBO_END };
const uint16_t PROGMEM combo_op_esc[] = { KC_W, KC_E, COMBO_END };
const uint16_t PROGMEM combo_as_tab[] = { LALT_T(KC_D), KC_S, COMBO_END };
const uint16_t PROGMEM combo_as_ent[] = { KC_L, RALT_T(KC_K), COMBO_END };

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
    // ------------------------ top left ----------------------- lower left --------------------- top right ----------------------- lower right
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [1] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [2] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [3] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [4] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [5] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
};
#endif
