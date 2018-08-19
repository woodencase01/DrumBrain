#include <Arduino.h>
#include "communication.h"
#include "sound.h"

void setup()
{

    // Serial monitor
    Serial.begin(115200);

    configwavtrigger();
}

void loop()
{

    readBuffer();
    managesound();
}
