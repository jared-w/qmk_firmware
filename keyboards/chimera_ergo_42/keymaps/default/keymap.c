#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = KEYMAP(
  //,--------------------------------------------.     -----------------------------------------
     KC_NO, KC_Q,    KC_W, KC_E, KC_R, KC_T, KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,    KC_NO,
  //|--------------------------------------------|     |---------------------------------------|
     KC_NO, KC_A,    KC_S, KC_D, KC_F, KC_G, KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_NO,
  //|--------------------------------------------|     |---------------------------------------|
     KC_NO, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N,     KC_M,    KC_COMM, KC_DOT, RSFT_T(KC_SLSH), KC_NO,
  //|--------------------------------------------|     |---------------------------------------|
                        KC_ESCM, KC_SMBL, KC_CTRB,     KC_NPDL, KC_SPC,  KC_ENTA
   // \-------------------------------------------/     \---------------------------------------/
  ),

  [_NUMPAD] = KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
  KC_NO, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_NO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
  KC_NO, KC_TRNS,  KC_VOLD, KC_VOLU, KC_MUTE, KC_PGUP, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_PLUS, KC_NO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
  KC_NO, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_PGDN, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  KC_TRNS, KC_NO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_SYMBOLS] = KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
      KC_NO, KC_LPRN,   KC_RPRN, KC_LBRC,   KC_RBRC,  KC_GRV,   KC_TILD, KC_EQL,  KC_UNDS, KC_LCBR, KC_RCBR, KC_NO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
      KC_NO, KC_LCBR,   KC_RCBR, KC_SLSH,  KC_F11, KC_F12,  KC_PIPE, KC_PLUS, KC_MINS, KC_LBRC, KC_RBRC, KC_NO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  // \------------------+----+----/      \---+----+----+--------------/
  ),

};
