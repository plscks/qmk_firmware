#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_MODS_ENABLE
#define SPLIT_TRANSPORT_MIRROR
//#define OLED_TIMEOUT 60000
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define USER_PRINT