// for my dad :)

#undef DEFAULT_THERM_CEIL
#define DEFAULT_THERM_CEIL 45

#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 1 // simple UI by default

#undef SIMPLE_UI_STEPS
#define SIMPLE_UI_STEPS 6

#undef SIMPLE_UI_FLOOR
#define SIMPLE_UI_FLOOR 20

// Allow 3C (or 6C) in Simple UI (toggle smooth or stepped ramping)
#undef USE_SIMPLE_UI_RAMPING_TOGGLE
#define USE_SIMPLE_UI_RAMPING_TOGGLE

// double click while on goes to full-power turbo, not ramp ceiling
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 2

// disable turbo in simple ui
#undef DEFAULT_2C_STYLE_SIMPLE
#define DEFAULT_2C_STYLE_SIMPLE 0

#undef INDICATOR_LED_DEFAULT_MODE
#define INDICATOR_LED_DEFAULT_MODE ((0<<2) + 2) // high, off

#undef USE_AUTOLOCK
