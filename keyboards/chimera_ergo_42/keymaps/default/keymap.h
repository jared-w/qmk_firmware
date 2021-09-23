#pragma once
#include QMK_KEYBOARD_H

enum chimera_ergo_42_layers {
  _QWERTY = 0,
  _NUMPAD,
  _SYMBOLS,
};

#define KC_ESCM MT(MOD_LGUI, KC_ESC)
#define KC_ENTA MT(MOD_LALT, KC_ENT)
#define KC_CTRB MT(MOD_LCTL, KC_BSPC)
#define KC_NPDL LT(_NUMPAD, KC_BSPC)
// #define KC_NPDL MO(_NUMPAD)
#define KC_SMBL MO(_SYMBOLS)
#define KC_SFTZ MT(MOD_LSFT, KC_Z)
#define KC_SFSL MT(MOD_RSFT, KC_SLSH)
