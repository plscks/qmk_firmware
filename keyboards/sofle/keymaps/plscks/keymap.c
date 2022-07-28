#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _WORK,
    _LOWER,
    _RAISE,
    _ADJUST,
};

// https://github.com/aseiger/qmk_firmware/blob/aseiger_dev/keyboards/sofle/keymaps/aseiger/keymap.c

enum custom_keycodes { KC_QWERTY = SAFE_RANGE, KC_WORK, KC_LOWER, KC_RAISE, KC_ADJUST, KC_PRVWD, KC_NXTWD, KC_LSTRT, KC_LEND, KC_DLINE, KC_RPLC, KC_ENCMOD, KC_PASTA };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * QWERTY
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |  ESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  TAB |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | LSH  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------|  MUTE |    |  PLAY |------+------+------+------+------+------|
     * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | CAPS |MOUSE4| LALT |LOWER | /Space  /       \Enter \  | Bspc |RAISE | R OS | RCTR |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

    [_QWERTY] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    KC_LCTRL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_CAPS, KC_ENCMOD, KC_LALT, KC_LOWER, KC_SPC, KC_ENT, KC_BSPC, KC_RAISE, KC_RGUI, KC_RCTRL),
    /*
     * WORK
    * ,-----------------------------------------.                    ,-----------------------------------------.
     * |  ESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  TAB |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | LSH  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------|  MUTE |    |  PLAY |------+------+------+------+------+------|
     * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | CAPS |MOUSE4| LALT |LOWER | /Space  /       \Enter \  | Bspc |RAISE | R OS | RCTR |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

    [_WORK] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    KC_LCTRL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_CAPS, KC_ENCMOD, KC_LALT, KC_LOWER, KC_SPC, KC_ENT, KC_BSPC, KC_RAISE, KC_RGUI, KC_RCTRL),
    /* LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
     * |------+------+------+------+------+------|  MUTE |    | RESET |------+------+------+------+------+------|
     * |      |  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LCTR | LGUI | LALT |LOWER | /Space  /       \  _   \  |RAISE | RALT | RGUI | RCTR |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_LOWER] = LAYOUT(_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_F12,
        KC_PASTA, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        _______, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, RESET, KC_MPRV, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
        _______, _______, _______, _______, _______, KC_UNDS, _______, _______, _______, _______),
    /* RAISE
     * ,----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Esc  | Ins  | Pscr | Menu | RPLC |      |                    | PGUP | PWrd |  Up  | NWrd | DLine| Bspc |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  | LAt  | LCtl |LShift| FIND | Caps |-------.    ,-------| PGDN | Left | Down | Rigth|  Del | Bspc |
     * |------+------+------+------+------+------|  MUTE |    | NEXT  |------+------+------+------+------+------|
     * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LCTR | LGUI | LALT |LOWER | /   _   /       \Space \  |RAISE | RALT | RGUI | RCTR |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_RAISE] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_ESC, KC_INS, KC_PSCR, KC_APP, KC_RPLC, XXXXXXX, KC_PGUP, KC_PRVWD, KC_UP, KC_NXTWD, KC_DLINE, KC_BSPC,
    _______, KC_LALT, KC_LCTL, KC_LSFT, KC_FIND, KC_CAPS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_BSPC,
    _______, KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX, _______, KC_MNXT, XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND, XXXXXXX, _______,
    _______, _______, _______, _______, KC_UNDS, _______, _______, _______, _______, _______),
    /* ADJUST
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | RESET|      |QWERTY|WORK|      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
     * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_ADJUST] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RESET, XXXXXXX, KC_QWERTY, KC_WORK, CG_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, CG_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)};

#ifdef OLED_DRIVER_ENABLE

#define IDLE_FRAMES 7
#define IDLE_SPEED 10 // below this wpm value your animation will idle

// #define PREP_FRAMES 1 // uncomment if >1

#define TAP_FRAMES 2
#define TAP_SPEED 13 // above this wpm value typing animation to triggere

#define ANIM_FRAME_DURATION 75 // how long each frame lasts in ms
//#define SLEEP_TIMER 60000 // should sleep after this period of 0 wpm, needs fixing
#define ANIM_SIZE 512 // number of bytes in array, minimize for adequate firmware size, max is 1024

char starfield_display[ANIM_SIZE] = {0};
char main_display[ANIM_SIZE]      = {0};

// 'spaceship', 128x32px
static const char epd_bitmap_spaceship[] PROGMEM = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xf2, 0xc2, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc6, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x30, 0x30, 0x70, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x07, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x27, 0x21, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

uint32_t anim_timer         = 0;
uint32_t anim_sleep         = 0;
uint8_t  current_idle_frame = 0;

static int previous_pixel_rate = 0;

static void play_animation(void) {
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();

        int starfield_pixel_rate = (get_current_wpm() / 8) + 1;

        int pixel_shift_distance = (starfield_pixel_rate < previous_pixel_rate ? previous_pixel_rate : starfield_pixel_rate);

        // shift everything to the left one pixel
        for (int i = 0; i < 127 - pixel_shift_distance; i++) {
            starfield_display[i] = starfield_display[i + pixel_shift_distance + 1];
        }
        for (int i = 128; i < 256 - pixel_shift_distance; i++) {
            starfield_display[i] = starfield_display[i + pixel_shift_distance + 1];
        }
        for (int i = 256; i < 383 - pixel_shift_distance; i++) {
            starfield_display[i] = starfield_display[i + pixel_shift_distance + 1];
        }
        for (int i = 384; i < 511 - pixel_shift_distance; i++) {
            starfield_display[i] = starfield_display[i + pixel_shift_distance + 1];
        }

        // determine if we should print a star
        int num_stars = (rand() % ((get_current_wpm() / 25) + 2));
        // if (num_stars < (get_current_wpm()+100)) num_stars = 1;
        // else num_stars = 0;

        for (int i = 0; i < pixel_shift_distance; i++) {
            starfield_display[511 - i] = 0;
            starfield_display[383 - i] = 0;
            starfield_display[255 - i] = 0;
            starfield_display[127 - i] = 0;
        }

        for (int i = 0; i < num_stars; i++) {
            int star_pos = rand() % 33;
            if (star_pos >= 24)
                starfield_display[511 - (rand() % starfield_pixel_rate)] = 0x1 << (star_pos - 24);
            else if (star_pos >= 16)
                starfield_display[383 - (rand() % starfield_pixel_rate)] = 0x1 << (star_pos - 16);
            else if (star_pos >= 8)
                starfield_display[255 - (rand() % starfield_pixel_rate)] = 0x1 << (star_pos - 8);
            else
                starfield_display[127 - (rand() % starfield_pixel_rate)] = 0x1 << star_pos;
        }

        for (int i = 0; i < ANIM_SIZE; i++) {
            main_display[i] = starfield_display[i] | pgm_read_byte(&(epd_bitmap_spaceship[i]));
        }

        oled_write_raw(main_display, ANIM_SIZE); // remove if IDLE_FRAMES >1
        previous_pixel_rate = starfield_pixel_rate;
    }
}

static void render_logo(void) {
    if (get_current_wpm() != 0) {
        oled_on(); // not essential but turns on animation OLED with any alpha keypress
        play_animation();
        anim_sleep = timer_read32();
    } else {
        if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
            oled_off();
        } else {
            play_animation();
        }
    }
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), 0);
    oled_write_ln_P(PSTR("MODE"), 0);
    oled_write_ln_P(PSTR(""), 0);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), 0);
    } else {
        oled_write_ln_P(PSTR("WIN"), 0);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), 0);
            break;
        case _WORK:
            oled_write_ln_P(PSTR("Work"), 0);
            break;
        default:
            oled_write_P(PSTR("Undef"), 0);
    }
    oled_write_P(PSTR("\n\n"), 0);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), 0);
    switch (get_highest_layer(layer_state)) {
        case _WORK:
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), 0);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), 0);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), 0);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), 0);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), 0);
    }
    oled_write_P(PSTR("\n\n"), 0);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

static bool encmod_registered;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    int mod_state = get_mods();
    switch (keycode) {
        case KC_ENCMOD:
            if (record->event.pressed) {
                encmod_registered = 1;
            } else {
                encmod_registered = 0;
            }
            return true;
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_WORK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_WORK);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_BSPC: {
            static bool delkey_registered;
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {

                    del_mods(MOD_MASK_SHIFT);
                    register_code(KC_DEL);

                    delkey_registered = 1;
                    set_mods(mod_state);
                    return false;
                }
            } else {
                if (delkey_registered) {
                    unregister_code(KC_DEL);
                    delkey_registered = 0;
                    return false;
                }
            }
            return true;
        }
        case KC_V:
            if ((mod_state & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL)) {
                switch (get_highest_layer(default_layer_state)) {
                    case _QWERTY:
                    case _RAISE:
                    case _ADJUST:
                    case _LOWER:
                        return true;
                        break;
                    case _WORK:
                        if (record->event.pressed) {
                            register_code(KC_LSFT);
                            register_code(KC_V);
                        } else {
                            unregister_code(KC_LSFT);
                            unregister_code(KC_V);
                        }
                        unregister_code(KC_LSFT);
                        return false;
                }
            }
            return true;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    // CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    // CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
                case KC_FIND:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_F);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_F);
            }
            return false;
        case KC_RPLC:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_R);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_R);
            }
            return false;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) {
        if (clockwise) {
            // [ ] For L/R make something switch to do KC_PRVWD KC_NXTWD
            // [x] For U/D make same something do page up/down
			switch (get_highest_layer(layer_state)) {
				case _WORK:
				case _QWERTY:
				case _RAISE:
				case _ADJUST:
                    tap_code(KC_LEFT);
					break;
				case _LOWER:
                    if (encmod_registered) {
                        tap_code(KC_PGUP);
                    } else {
                        tap_code(KC_UP);
                    }
					break;
			}
        } else {
            switch (get_highest_layer(layer_state)) {
				case _WORK:
				case _QWERTY:
				case _RAISE:
				case _ADJUST:
                    tap_code(KC_RIGHT);
					break;
				case _LOWER:
                    if (encmod_registered) {
                        tap_code(KC_PGDN);
                    } else {
                        tap_code(KC_DOWN);
                    }
					break;
			}
        }
    }
    return true;
}

#endif
