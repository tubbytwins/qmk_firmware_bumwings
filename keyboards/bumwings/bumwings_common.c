// Copyright 2022 Matthew A. Schnoor (@tubbytwins)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "bumwings_common.h"

/*
 * Handler for custom keycodes.
 */

#define IWAIT SS_DELAY(40)

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case HEX_0X: // Types "0x" for hexadecimal numbers
            if (record->event.pressed) {
                SEND_STRING("0x");
            }
            break;
        case MY_BPK: // Types "BPK"
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) IWAIT "B" IWAIT "P" IWAIT "K" IWAIT SS_UP(X_LSFT) IWAIT);
            }
            break;
        case MY_HCI: // Types "HCI"
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) IWAIT "H" IWAIT "C" IWAIT "I" SS_UP(X_LSFT) IWAIT);
            }
            break;
        case MY_I3C: // Types "I3C"
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) IWAIT "I" IWAIT "3" IWAIT "C" SS_UP(X_LSFT) IWAIT);
            }
            break;
        case MY_TCRI: // Types "TCRI"
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) IWAIT "T" IWAIT "C" IWAIT "R" IWAIT "I" SS_UP(X_LSFT) IWAIT);
            }
            break;
        case MY_S3M: // Types "S3M"
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) IWAIT "S" IWAIT "3" IWAIT "M" SS_UP(X_LSFT) IWAIT);
            }
            break;
    }
    return true;
}


/*
 * Handler for caps-word function.
 */

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

