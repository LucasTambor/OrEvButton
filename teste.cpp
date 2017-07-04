/********************************
*                               *
*   Botão orientado a eventos   *
*                               *
*********************************/

#include "Arduino.h"
#include "EventButtom.hpp"

//------------------------------------------------------------

const int BOTAO = 6;

const int led = 13;

EventButtom btn(BOTAO, HIGH);

//------------------------------------------------------------

void buttompress(void)
{
//o que quiser que aconteca quando pressiona 
}

//------------------------------------------------------------

void buttomrelease(void)
{
//o que quiser que aconteca quando soltar
}

//------------------------------------------------------------

void setup()
{
    pinMode(led, OUTPUT);

    btn.setOnPressCallback(&buttompress);

    btn.setOnReleaseCallback(&buttomrelease);
}

//------------------------------------------------------------

void loop()
{
    btn.process();
}

//------------------------------------------------------------
