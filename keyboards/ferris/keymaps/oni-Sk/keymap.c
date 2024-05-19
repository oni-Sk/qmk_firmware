#include QMK_KEYBOARD_H
#include "keymap_french_mac_iso.h"

#define MTC_A MT(MOD_LCTL,FR_A) // MTC -> Mod-tap Control
#define MTA_U MT(MOD_LALT,FR_U) // MTA -> Mod-tap Alt / Option
#define MTG_I MT(MOD_LGUI,FR_I) // MTG -> Mod-tap GUI / Command
#define MTS_E MT(MOD_LSFT,FR_E) // MTS -> Mod-tap Shift
#define MTS_T MT(MOD_RSFT,FR_T)
#define MTG_S MT(MOD_RGUI,FR_S)
#define MTA_R MT(MOD_RALT,FR_R)
#define MTC_N MT(MOD_RCTL,FR_N)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_split_3x5_2(
	FR_B,       FR_M,       FR_P,       FR_O,       FR_MINS,    /* | */     FR_Z,       FR_V,       FR_D,       FR_L,       FR_J,
    MTC_A,      MTA_U,      MTG_I,      MTS_E,      FR_COMM,    /* | */     FR_C,       MTS_T,      MTG_S,      MTA_R,      MTC_N,
    FR_COLN,    FR_Y,       FR_X,       FR_DOT,     FR_K,       /* | */     FR_W,       FR_Q,       FR_G,       FR_H,       FR_F,
                                            KC_ESC,LT(3,KC_ENT),/* | */ LT(2,KC_SPC), LT(1,KC_TAB)
),
[1] = LAYOUT_split_3x5_2(
	KC_P9,      KC_P8,      KC_P7,      KC_P6,      KC_P5,      /* | */     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
	KC_P4,      KC_P3,      KC_P2,      KC_P1,      KC_P0,      /* | */     XXXXXXX,    KC_PPLS,    KC_PMNS,    KC_PAST,    KC_PSLS,
	FR_LABK,    FR_RABK,    FR_LPRN,    FR_RPRN,    FR_PERC,    /* | */     XXXXXXX,    FR_BSLS,    FR_DEG,     FR_EURO,    XXXXXXX,
                                            XXXXXXX,    FR_EQL, /* | */ XXXXXXX, XXXXXXX
),
[2] = LAYOUT_split_3x5_2(
	FR_AT,      FR_AMPR,    FR_HASH,    FR_DLR,     FR_UNDS,    /* | */     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
	FR_EXLM,    FR_QUES,    FR_QUOT,    FR_DQUO,    FR_SCLN,    /* | */     FR_LCCE,    FR_LEAC,    FR_GRV,     FR_CIRC,    FR_DIAE,
	FR_LCBR,    FR_RCBR,    FR_LBRC,    FR_RBRC,    FR_PIPE,    /* | */     XXXXXXX,    FR_TILD,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                            XXXXXXX,    XXXXXXX,/* | */ XXXXXXX, XXXXXXX
),
[3] = LAYOUT_split_3x5_2(
	XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /* | */     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
	XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /* | */     XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,
	XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /* | */     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                            XXXXXXX,    XXXXXXX,/* | */ KC_BSPC, KC_DEL
)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
