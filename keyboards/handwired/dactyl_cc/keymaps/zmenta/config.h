// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Split keyboard detection
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define EE_HANDS

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

// When the user holds a key after tapping it, the tapping function is repeated by default, rather than activating the hold function. This allows keeping the ability to auto-repeat the tapping function of a dual-role key. QUICK_TAP_TERM enables fine tuning of that ability. If set to 0, it will remove the auto-repeat ability and activate the hold function instead.
#define QUICK_TAP_TERM 0

// This determines what is a tap and what is a hold
// This setting is defined in milliseconds and defaults to 200ms
#define TAPPING_TERM 140 // previously 160

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* mouse config */
#define MOUSEKEY_DELAY          0
// Lowering MOUSEKEY_INTERVAL raises the cursor speed significantly, you may want to lower MOUSEKEY_MAX_SPEED (default: 10)
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED       7
#define MOUSEKEY_WHEEL_DELAY 0

/* layer config */
#define TAPPING_TOGGLE 1

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
