#include "dz60.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define ______ KC_TRNS
#define xxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
Base Layer
,-----------------------------------------------------------.
|F(12)| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp|
|-----------------------------------------------------------|
|Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
|-----------------------------------------------------------|
|Fn     |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
|-----------------------------------------------------------|
|Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
|-----------------------------------------------------------|
|Ctrl|Gui |Alt |      Space             |Alt |Gui |Ctrl|Fn  |
`-----------------------------------------------------------'
*/
  KEYMAP(
    KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, xxxxxx, KC_BSPC, 
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
    MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
    KC_LSFT, xxxxxx, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, xxxxxx, 
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, KC_RGUI, xxxxxx, KC_RCTL, MO(1)),
/*
,-----------------------------------------------------------.
|  ~ | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete|
|-----------------------------------------------------------|
|    |RTog|RMod|RHi|Rhd|RSi|RSd|RVi|RVd|Ins|Pscr|PgD|PgU|   |
|-----------------------------------------------------------|
|       |    |    |    |Cap|   |Lft|Dwn| Up|Rht|End|Hme|    |
|-----------------------------------------------------------|
|       |   |   |BlD|BlT|BlS|   |   |   |ScrLk|Paus|        |
|-----------------------------------------------------------|
|    |    |    |                          |    |    |   |   |
`-----------------------------------------------------------'
*/
  KEYMAP(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ______, KC_DEL, 
    ______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_INS, KC_PSCR, KC_PGDOWN, KC_PGUP, RESET, 
    ______, ______, ______, ______, KC_CAPSLOCK, ______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_END, KC_HOME, ______, 
    ______, ______, ______, ______, BL_DEC, BL_TOGG, BL_INC, BL_STEP, ______, ______, KC_SLCK, KC_PAUS, ______, ______, 
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______),

  KEYMAP(
    ______, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), ______, ______, 
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, 
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, 
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, 
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______),
};

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
  }
}