// Copyright 2022 Matthew A. Schnoor (@tubbytwins)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/*
 * Define our custom keycodes.  The handler is in file "bumwings_common.c".
 */
 
enum custom_keycodes {
    HEX_0X = SAFE_RANGE,
    MY_BPK,
    MY_HCI,
    MY_I3C,
    MY_TCRI,
    MY_S3M,
};


