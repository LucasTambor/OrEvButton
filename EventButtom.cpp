/********************************
*                               *
*   Botão orientado a eventos   *
*                               *
*********************************/

#include "EventButtom.hpp"

//------------------------------------------------------------

EventButtom::EventButtom(const int pin, const bool press_level):
    pin(pin),
    level(press_level)
{
    pinMode(this->pin, INPUT);
    last_state = digitalRead(this->pin);
}

//------------------------------------------------------------

void EventButtom::setOnPressCallback(void callback (void))
{
    onPress = callback;
}

//------------------------------------------------------------

void EventButtom::setOnReleaseCallback(void callback (void))
{
    onRelease = callback;
}

//------------------------------------------------------------



void EventButtom::process(void)
{
    bool state;

    state = digitalRead(pin);

    if (state != last_state)
    {
        if (state == level)
        {
            if(onPress != NULL) onPress();
        }
        else
        {
            if(onRelease != NULL) onRelease();
        }

        last_state = state;
    }
}


//------------------------------------------------------------
