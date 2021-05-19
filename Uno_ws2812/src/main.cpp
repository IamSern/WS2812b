#include <Arduino.h>
#include "FastLED.h"

#define NUM_LEDS 8
#define data_pin 3

CRGB led[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, data_pin > (led, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < NUM_LEDS; i++){
    led[i] = CRGB::White;
    FastLED.show();
    delay(10);
    //led[i] = CRGB::Black;
    FastLED.show();
  }
  
}