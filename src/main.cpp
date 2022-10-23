#include <M5Stack.h>
#include "HX711.h"

HX711 scale;

void setup()
{
  // put your setup code here, to run once:
  M5.begin();
  scale.begin(21, 22);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (scale.is_ready())
  {
    long reading = scale.read();
    Serial.println(reading);
  }
  delay(25);
}