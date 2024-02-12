// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_5x5(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                              KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                              KC_N,    KC_M,    KC_COMM,   KC_DOT,  KC_UP,  KC_SLSH, 
        KC_LCTL, KC_LALT, KC_LGUI, KC_INSERT, KC_SPACE,KC_SPACE,LT(1,KC_SPACE),LT(2,KC_SPACE),KC_SPACE, KC_SPACE, KC_RCTL,KC_LEFT, KC_DOWN, KC_RIGHT
  ),
    [1] = LAYOUT_ortho_5x5(
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_LCTL,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ENT,
    KC_LSFT, KC_PPLS,    KC_PMNS,    KC_PAST,    KC_PSLS,    KC_PEQL,    KC_GRV,    KC_M,    RSFT(KC_LBRC),   RSFT(KC_RBRC),  RSFT(KC_MINS), KC_RSFT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_INSERT, KC_SPACE,KC_SPACE,LT(1,KC_SPACE),LT(2,KC_SPACE),KC_SPACE, KC_SPACE, KC_RCTL,KC_LEFT, KC_DOWN, KC_RIGHT
  ),
    [2] = LAYOUT_ortho_5x5(
        KC_TAB,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_DEL,
    KC_LCTL,  KC_AT,    KC_BSLS,    KC_SCLN,   RSFT(KC_SCLN), KC_QUOT,    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_EQL, KC_ENT,
    KC_LSFT, RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    KC_LBRC,   KC_RBRC,  KC_BSLS, KC_RSFT,
KC_LCTL, KC_LALT, KC_LGUI, KC_INSERT, KC_SPACE,KC_SPACE,LT(1,KC_SPACE),LT(2,KC_SPACE),KC_SPACE, KC_SPACE, KC_RCTL,KC_LEFT, KC_DOWN, KC_RIGHT
 )
};
