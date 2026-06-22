#include QMK_KEYBOARD_H

enum custom_layers {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        S(KC_RGHT), KC_MPLY, KC_MFFD,
        LGUI(KC_C), LGUI(KC_V), KC_MUTE  
    )
};

#ifdef ENCODER_MAP_ENABLE

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_DIRECTION_MAP(KC_VOLD, KC_VOLU) }
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_ln("  CodePad Mac ", false);
    oled_write_ln("--------------", false);
    uint32_t total_seconds = timer_read32() / 1000;
    uint32_t minutes = total_seconds / 60;
    uint32_t seconds = total_seconds % 60;
    
    char clock_str[16];
    snprintf(clock_str, sizeof(clock_str), "Uptime: %02lu:%02lu", minutes, seconds);
    oled_write_ln(clock_str, false);
    
    return false;
}
#endif
