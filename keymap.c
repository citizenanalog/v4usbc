#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    LGUI(KC_1),    LGUI(KC_3),    LGUI(KC_4),    KC_H,    LGUI_T(KC_J),    RALT_T(KC_K),    RCTL_T(KC_L),
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           LGUI(KC_2),    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SCLN,    LSFT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_A,    LCTL_T(KC_S),    LALT_T(KC_D),    LGUI_T(KC_F),    KC_G,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_LGUI,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_NO,   KC_SPC,   OS_LSFT,   TO(1),  KC_SPC,  KC_NO
                                             //`--------------------------' `--------------------------'
    ),
    [1] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_ESC,    KC_AT,    KC_HASH,    KC_DLR,    KC_PERC,    KC_NO,    KC_NO,    KC_NO,    KC_BSLS,    KC_LCBR,    KC_RCBR,    KC_PIPE,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_NO,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_SCLN,    KC_BSPC,    KC_ENT,    KC_TILD,    KC_GRV,    KC_DQUO,    KC_UNDS,    KC_DQUO,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_TAB,    KC_EQL,    KC_MINS,    KC_DEL,    KC_QUOT,    KC_LBRC,    KC_LPRN,    KC_RPRN,    KC_RBRC,    TO(2),
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_NO,   TO(0),   KC_LGUI,   TO(3),  KC_SPC,  KC_NO
                                             //`--------------------------' `--------------------------'
    ),
    [2] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_ESC,    KC_NO,    KC_NO,    TO(4),    TO(5),    KC_NO,    KC_NO,    KC_NO,    KC_LEFT,    KC_DOWN,    KC_UP,    KC_RGHT,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_NO,    KC_WBAK,    KC_F5,    KC_NO,    KC_WFWD,    KC_BSPC,    KC_ENT,    QK_BOOT,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_TAB,    KC_NO,    KC_LCTL,    KC_LSFT,    KC_DEL,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,    KC_TRNS,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_NO,   TO(0),   KC_LGUI,   KC_RALT,  KC_SPC,  KC_NO
                                             //`--------------------------' `--------------------------'
    ),
    [3] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_ESC,    KC_MPLY,    KC_MPRV,    KC_MNXT,    KC_UNDS,    KC_NO,    KC_NO,    KC_NO,    KC_EQL,    KC_4,    KC_5,    KC_6,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_NO,    KC_MINS,    KC_7,    KC_8,    KC_9,    KC_BSPC,    KC_ENT,    QK_RBT,    KC_ASTR,    KC_NO,    KC_LCTL,    KC_DOT,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_TAB,    KC_VOLD,    KC_VOLU,    KC_LSFT,    KC_PLUS,    KC_0,    KC_1,    KC_2,    KC_3,    TO(2),
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_NO,   TO(0),   KC_LGUI,   KC_RALT,  KC_TRNS,  KC_NO
                                             //`--------------------------' `--------------------------'
    ),
    [4] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           QK_BOOT,    KC_NO,    KC_NO,    KC_TRNS,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_F4,    KC_F5,    KC_F6,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_NO,    KC_PSCR,    KC_F7,    KC_F8,    KC_F9,    KC_F12,    KC_F11,    RM_NEXT,    RM_HUED,    RM_SATD,    RM_VALD,    RM_SPDD,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           RM_TOGG,    RM_HUEU,    RM_SATU,    RM_VALU,    RM_SPDD,    KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F10,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_NO,   TO(0),   KC_NO,   KC_NO,  KC_NO,  KC_NO
                                             //`--------------------------' `--------------------------'
    ),
    [5] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_ESC,    KC_W,    KC_E,    KC_R,    KC_TRNS,    KC_NO,    KC_NO,    KC_NO,    KC_H,    KC_NO,    KC_NO,    KC_L,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_NO,    KC_NO,    KC_U,    KC_NO,    KC_HOME,    KC_DEL,    KC_NO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    //,-----------------------------------------------------. ,-----------------------------------------------------.
           KC_A,    KC_S,    KC_D,    KC_F9,    KC_G,    KC_N,    KC_M,    KC_NO,    KC_P,    KC_RCTL,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_NO,   TO(0),   KC_LCTL,   KC_SPC,  KC_RSFT,  KC_NO
                                             //`--------------------------' `--------------------------'
    ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
