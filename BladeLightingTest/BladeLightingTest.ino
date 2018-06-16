

#include <WS2812.h>

short numberOfLED = 144;

WS2812 LED(numberOfLED); // 144 LEDs

cRGB value;

void setup() {

  LED.setOutput(13); // Data pin 13

}

void loop() {

  for(short i = 0; i < numberOfLED; i++) {

    value.b = 0; value.g = 255; value.r = 0; // RGB Value -> Blue
    LED.set_crgb_at(i, value); // Set value at LED found at index 0
    LED.sync(); // Sends the value to the LED
    delay(10); // Wait 500 ms
    
  }

}
