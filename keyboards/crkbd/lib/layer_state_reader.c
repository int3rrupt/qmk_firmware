
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "crkbd.h"

// in the future, should use (1U<<_LAYER_NAME) instead, but needs to be moved to keymap,c
#define L_QWERTY 0
#define L_SPCNAV 2
#define L_NUMBER 4
#define L_FN 8
#define L_ADJUST_TRI 14

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_QWERTY:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: QWERTY");
    break;
  case L_SPCNAV:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Space/Nav");
    break;
  case L_NUMBER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Num/Media");
    break;
  case L_FN:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
