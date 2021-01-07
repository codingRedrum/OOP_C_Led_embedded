#ifndef Led_h
#define Led_h

#include <stdint.h>
#include "uart.h"

typedef enum {
    RED = 0,
    GREEN,
    YELLOW,
    BLUE
} LedColors_Type;

typedef enum {
    OFF = 0,
    ON = 1
    
} LedState_Type;

// is gona tell us about Led we want to know color, state etc.
typedef struct {
    LedColors_Type color;
    LedState_Type state;
} Led_Type;

// create LED
void Led_constr(Led_Type * const me, LedColors_Type _color, LedState_Type _state);
// set state of LED
void Led_setState(Led_Type * const me, LedState_Type _state);
LedState_Type Led_getState(Led_Type * const me);


#endif /* Led_h */
