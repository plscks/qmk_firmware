#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define USER_PRINT
#undef MATRIX_COL_PINS 
#define MATRIX_COL_PINS { NO_PIN, F6, F7, B1, B3, B2, B6 }