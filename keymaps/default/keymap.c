/* Copyright 2019 Max Rodrigo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define LAYER_INDICATOR_PIN E6

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT(
      KC_MPRV, KC_MPLY, KC_MNXT, TG(1),
      KC_VOLD, KC_MUTE, KC_VOLU, KC_NO
      ),
  [_FL] = LAYOUT(
      KC_WAKE, KC_SLEP, KC_PWR, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      )
};

void keyboard_pre_init_user(void)
{
  setPinOutput(LAYER_INDICATOR_PIN);
}

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _FL:
      writePinHigh(LAYER_INDICATOR_PIN);
      break;
    default:
      writePinLow(LAYER_INDICATOR_PIN);
      break;
  }
  return state;
}
