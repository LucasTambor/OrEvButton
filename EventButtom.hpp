/********************************
*                               *
*   Botão orientado a eventos   *
*                               *
*********************************/

#ifndef EVENTBUTTOM_HPP
#define EVENTBUTTOM_HPP

//------------------------------------------------------------

#include "Arduino.h"

//------------------------------------------------------------
/*typedef void (*event) (void);
event onPress;
event onRelease;
void setOnPressCallback(event callback);
void setOnReleaseCallback(event calback);
*/
class EventButtom
{
    public:
        EventButtom(const int pin, const bool press_level);

        void setOnPressCallback(void (*callback) (void));
        void setOnReleaseCallback(void (*callback) (void));

        void process(void);


    private:
        int pin;
        bool level;

        bool last_state;

        void(*onPress)(void);

        void(*onRelease)(void);

};


//------------------------------------------------------------
#endif //EVENTBUTTOM_HPP
