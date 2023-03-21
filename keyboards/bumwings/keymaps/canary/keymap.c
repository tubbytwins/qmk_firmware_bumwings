// Copyright 2022 Matthew A. Schnoor (@tubbytwins)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "bumwings_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *         ┌───┬───┬───┬───┐                   ┌───┬───┬───┬───┐ 
     *     ┌───┤ L │ Y │ P │ B │                   │ Z │ F │ O │ U ├───┐
     * ┌───┤ W ├───┼───┼───┼───┼───┐           ┌───┼───┼───┼───┼───┤ ' ├───┐
     * │Tab├───┤ R │ S │ T │ G │Bsp│           │Bsp│ M │ N │ E │ I ├───┤ = │ 
     * ├───┤ C ├───┼───┼───┼───┼───┘           └───┼───┼───┼───┼───┤ A ├───┤
     * │Ctl├───┤ J │ V │ D │ K │                   │ X │ H │ ; │ , ├───┤ - │
     * ├───┤ Q ├───┴───┴───┴───┘   ┌───┐   ┌───┐   └───┴───┴───┴───┤ . ├───┤
     * │Shf├───┘    ┌───┐     ┌───┐│Gui│   │Alt│┌───┐     ┌───┐    └───┤Shf│
     * └┬──┴┐       │PUp│     │   │├───┤   ├───┤│   │     │Up │       ┌┴──┬┘
     *  │ ` │   ┌───┼───┼───┐ │Spc││l1 │   │l2,││Spc│ ┌───┼───┼───┐   │ / │
     *  └───┘   │Hom│PDn│End│ │   ││   │   │Ret││   │ │ L │Dn │ R │   └───┘
     *          └───┴───┴───┘ └───┘└───┘   └───┘└───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_14x4_bum_thumbs(
    	KC_TAB,   KC_W,    KC_L,    KC_Y,    KC_P,   KC_B,                            KC_Z,   KC_F,    KC_O,    KC_U,     KC_QUOTE, KC_EQUAL,
    	KC_LCTL,  KC_C,    KC_R,    KC_S,    KC_T,   KC_G,   KC_BSPC, KC_BSPC,        KC_M,   KC_N,    KC_E,    KC_I,     KC_A,     KC_MINUS,
    	KC_LSFT,  KC_Q,    KC_J,    KC_V,    KC_D,   KC_K,   KC_LGUI, KC_LALT,        KC_K,   KC_H,    KC_SCLN, KC_COMMA, KC_DOT,   KC_RSFT,
    	KC_GRAVE, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_SPC, MO(1),   LT(2,KC_ENTER), KC_SPC, KC_LEFT, KC_UP,   KC_DOWN,  KC_RIGHT, KC_SLASH
    ),
    [1] = LAYOUT_14x4_bum_thumbs(
    	KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   HEX_0X,  KC_7, KC_8, KC_9, KC_SLASH, KC_PLUS,
    	_______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,  KC_BSPC, KC_DOT,  KC_4, KC_5, KC_6, KC_BSLS,  KC_UNDS,
    	_______, KC_COLN, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_LGUI, KC_LALT, KC_0,    KC_1, KC_2, KC_3, KC_PIPE,  KC_RSFT,
    	KC_TILD, _______, _______, _______, _______, _______, _______, KC_PENT, _______, _______, _______, _______, _______, KC_APP
    ),
    [2] = LAYOUT_14x4_bum_thumbs(
        KC_CALC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_QUES, _______, _______, _______, _______, _______,
        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,   KC_BSPC, _______, _______, _______, _______, _______, _______, 
        _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  _______,  _______, _______, _______, _______, _______, _______, CW_TOGG, 
        KC_INS,  _______, _______, _______, _______, _______, KC_ENTER, _______, _______, _______, _______, _______, _______, KC_ESC
    )
};

