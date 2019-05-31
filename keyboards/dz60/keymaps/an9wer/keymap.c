#include QMK_KEYBOARD_H

#define _BL 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ,-----------------------------------------------------------.
 * |` ~|1 !|2 "|3 £|4 $|5 %|6 ^|7 &|8 *|9 (|0 )|- _|= +| Bksp  |
 * |-----------------------------------------------------------|
 * |Tab  | Q | W | E | R | T | Y | U | I | O | P |[ {|] }| \ | |
 * |-----------------------------------------------------------|
 * |Return| A | S | D | F | G | H | J | K | L |; :|' "| Return |
 * |-----------------------------------------------------------|
 * |Shift   | Z | X | C | V | B | N | M |, <|. >|/ ?|    fn    |
 * |-----------------------------------------------------------|
 * |Ctrl|GUI |Alt |         Space          |Bksp|Del |Shft|Esc |
 * `-----------------------------------------------------------'
*/
    [_BL] = LAYOUT_60_ansi(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_ENT,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          MO(1),
		KC_LCTL, KC_LGUI,          KC_LALT,                   KC_SPC,                             KC_BSPC, KC_DEL,           KC_RSFT, KC_ESC),
/*
 * ,-----------------------------------------------------------.
 * |   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| Reset |
 * |-----------------------------------------------------------|
 * |     |Hom| U |End|   |   |   |   |   |   |   |   |   |     |
 * |-----------------------------------------------------------|
 * |      | L | D | R |   |   |   |   |   |   |   |   |        |
 * |-----------------------------------------------------------|
 * |        |   |   |   |   |   |   |   |   |   |   |          |
 * |-----------------------------------------------------------|
 * |    |    |    |                        |    |    |    |    |
 * `-----------------------------------------------------------'
*/

	[_FN] = LAYOUT_60_ansi(
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           RESET,
		KC_TRNS,          KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_LEFT, KC_DOWN, KC_RIGHT,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS ,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS)
};
