/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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
#include "version.h"

#include "combos.c"
#include "tapdance.c"
#include "ledlights.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        _______, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,      _______,              _______,     KC_Y,           KC_U,           KC_I,           KC_O,           KC_BSPC,        _______,
        _______, SFT_T(KC_A),    LCTL_T(KC_S),   LALT_T(KC_D),   LGUI_T(KC_F),   KC_G,      _______,              _______,     KC_H,           RGUI_T(KC_J),   RALT_T(KC_K),   RCTL_T(KC_L),   RSFT_T(KC_P),   _______,
        _______, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,      _______,              _______,     KC_N,           KC_M,           KC_COMM,        TD(DOT_EL),         KC_SLSH,        _______,
        _______, _______,         _______,         MEH(KC_NO),     KC_SPC,         HYPR_T(KC_TAB),                              LT(1, KC_ENT),         TT(2),          TT(3),          _______,         _______,         _______,
        _______, _______,         _______,         _______,         _______,                 _______,                 _______,                 _______,         _______,         _______,         _______,         _______,
                                                                            _______, _______, _______,             _______, _______, _______
    ),

    [1] = LAYOUT_moonlander(
        _______,KC_ESC,           KC_HASH,        TD(EUR_DOL),    KC_UNDS,        KC_DQUO,      _______,              _______,            KC_QUOT,        KC_NO,          KC_NO,        KC_TILD,        KC_BSPC,_______,
        _______,KC_LSFT,          KC_LCTL,        KC_LOPT,        KC_LCMD,        TD(DASH_EM),  _______,              _______,        KC_GRV,         KC_EXLM,        KC_COLN,      KC_NO,          KC_NO,_______,
        _______,LALT(KC_BSLS),    LSA(KC_BSLS),   LALT(KC_8),     TD(PI_PASTE),   KC_AMPR,      _______,              _______,          KC_SCLN,        KC_LBRC,        KC_RBRC,      KC_CIRC,        KC_BSLS,_______,
        _______, _______,         _______,         MEH(KC_NO),     KC_SPC,         HYPR_T(KC_TAB),                              LT(1, KC_ENT),         TT(2),          TT(3),          _______,         _______,         _______,
        _______, _______,         _______,         _______,         _______,                 _______,                     _______,                 _______,         _______,         _______,         _______,         _______,
                                                                            _______, _______, _______,             _______, _______, _______
    ),

    [2] = LAYOUT_moonlander(
        _______,KC_ESC,           KC_BRID,        KC_BRIU,        LGUI(KC_GRV),   LCTL(KC_TAB), _______,              _______,    KC_PGUP,        LGUI(KC_LBRC),  KC_UP,          LGUI(KC_RBRC),  KC_BSPC, _______,
        _______,KC_LSFT,          KC_LCTL,        KC_LOPT,        KC_LCMD,        KC_NO,        _______,              _______,      KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RGHT,        KC_NO, _______,
        _______,KC_NO,            KC_NO,          KC_NO,          KC_NO,          KC_NO,        _______,              _______,      KC_NO,          KC_MINUS,       KC_EQL,         KC_NO,          KC_NO, _______,
        _______, _______,         _______,    TO(0),          KC_SPC,         HYPR_T(KC_TAB),                              LT(1, KC_ENT),         TT(2),          TT(3),          _______,         _______,         _______,
        _______, _______,         _______,         _______,         _______,                 _______,                     _______,                 _______,         _______,         _______,         _______,         _______,
                                                                                _______, _______, _______,             _______, _______, _______
    ),

    [3] = LAYOUT_moonlander(
        // COMBO's:
        // 4 + 5 = Enter
        _______, TD(ESC_FRC),      KC_DEL,         KC_NO,          KC_PERC,        KC_TAB,      _______,            _______, KC_PMNS,        KC_7,           KC_8,           KC_9,           KC_BSPC, _______,
        _______, KC_LSFT,          KC_LCTL,        KC_LOPT,        KC_LCMD,        KC_COLN,     _______,            _______, KC_PPLS,        KC_4,           KC_5,           KC_6,           KC_COMM, _______,
        _______, KC_NO,            KC_NO,          KC_PSLS,        KC_ASTR,        KC_PEQL,     _______,            _______, KC_0,           KC_1,           KC_2,           KC_3,           KC_DOT, _______,
        _______, _______,         _______,    TO(0),          KC_SPC,         HYPR_T(KC_TAB),                              LT(1, KC_ENT),         TT(2),          TT(3),          _______,         _______,         _______,
        _______, _______,         _______,         _______,         _______,                 _______,                     _______,                 _______,         _______,         _______,         _______,         _______,
                                                                                _______, _______, _______,             _______, _______, _______
    ),
};
