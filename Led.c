#include "Led.h"


void Led_constr(Led_Type * const me, LedColors_Type _color, LedState_Type _state)
{
    me->color = _color;
    me->state = _state;
}

// set state of LED
void Led_setState(Led_Type * const me, LedState_Type _state)
{
    me->state = _state;
    
    switch (me->color) {
            
        case RED:
            printf("The RED Led is set to %d \n\r", me->state);
            break;
        case GREEN:
            printf("The GREEN Led is set to %d \n\r", me->state);
        case YELLOW:
            printf("The YELLOW Led is set to %d \n\r", me->state);
        case BLUE:
            printf("The BLUE Led is set to %d \n\r", me->state);
            break;
    }
}

LedState_Type Led_getState(Led_Type * const me)
{
    
    return me->state;
}



