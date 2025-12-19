/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    LGUI(KC_1), LGUI(KC_2),    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_A,    LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,    LGUI(KC_3), LGUI(KC_4),    KC_H,    RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------|
          LSFT_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
    //|--------+--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------+--------|
                                                KC_NO,   KC_SPC,  OS_LSFT, TO(1),   KC_SPC,  KC_NO
                                            //`--------------------------' `--------------------------'
    ),
    [1] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
          KC_ESC,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_NO,   KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_SCLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_TAB,  KC_EQL,  KC_MINS, KC_DEL,  KC_QUOT, KC_NO,   KC_NO, KC_BSLS, LSFT(KC_LBRC), LSFT(KC_RBRC), KC_PIPE, KC_ENT,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_TILD, KC_GRV,  KC_DQUO, KC_UNDS, KC_DQUO,                 KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, TO(2),
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------+--------|
                                    KC_NO,   TO(0),   KC_LGUI, TO(3),   KC_SPC,  KC_NO
                               //`--------------------------' `--------------------------'
    ),
    [2] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
          KC_ESC,  KC_NO,   KC_NO,   TO(4),   TO(5),   KC_NO,      KC_NO,         KC_WBAK, KC_F5,   KC_NO,   KC_WFWD, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_TAB,  KC_NO,   KC_LCTL, KC_LSFT, KC_DEL,  KC_NO,      KC_NO,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_HOME, KC_PGDN, KC_PGUP, KC_END,  TO(3),
    //|--------+--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------+--------|
                                                             KC_NO,   TO(0),   KC_LGUI, KC_RALT, KC_SPC,  KC_NO
                                            //`--------------------------' `--------------------------'
    ),
    [3] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
          KC_ESC,  KC_MPLY, KC_MPRV, KC_MNXT, KC_UNDS, KC_NO,      KC_NO,         KC_MINS, KC_7,    KC_8,    KC_9,    KC_BSPC,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_TAB,  KC_VOLD, KC_VOLU, KC_LSFT, KC_PLUS, KC_NO,      KC_NO,         KC_EQL,  KC_4,    KC_5,    KC_6,    KC_ENT,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          QK_RBT,  KC_ASTR, KC_NO,   KC_LCTL, KC_DOT,                       KC_0,    KC_1,    KC_2,    KC_3,    TO(2),
    //|--------+--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------+--------|
                                                             KC_NO,   TO(0),   KC_LGUI, KC_RALT, KC_TRNS, KC_NO
                                            //`--------------------------' `--------------------------'
    ),
    [4] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
          QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,         KC_PSCR, KC_F7,   KC_F8,   KC_F9,   KC_F12,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          UG_TOGG, UG_HUEU, UG_SATU, UG_VALU, KC_NO,   KC_NO,      KC_NO,         KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F11,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          UG_NEXT, UG_HUED, UG_SATD, UG_VALD, KC_NO,                        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F10,
    //|--------+--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------+--------|
                                                             KC_NO,   TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO
                                            //`--------------------------' `--------------------------'
    ),
    [5] = LAYOUT_split_3x5_3_ex2(
    //,-----------------------------------------------------. ,-----------------------------------------------------.
          KC_ESC,  KC_W,    KC_E,    KC_R,    KC_TRNS, KC_NO,      KC_NO,         KC_NO,   KC_U,    KC_NO,   KC_HOME, KC_DEL,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_A,    KC_S,    KC_D,    KC_F9,   KC_G,    KC_NO,      KC_NO,         KC_H,    KC_NO,   KC_NO,   KC_L,    KC_NO,
    //|--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------|
          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_NO,   KC_P,    KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------+--------+--------|
                                                             KC_NO,   TO(0),   KC_LCTL, KC_SPC,  KC_RSFT, KC_NO
                                            //`--------------------------' `--------------------------'
    )
};
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
