#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()
int red = 0, green= 0, blue = 0, white = 0;
int wait = 500;
int led = 0;
int i;

void loop() {
  
  for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    
    red = red + 8;
    green = green + 16;
    blue = blue + 32;
    white = white + 0;
    for ( i = random(100); i < 101; i++){
  
     
     
     if (red > 255) red = 50 * i;
     if (green > 255) green = 15 * i;
     if (blue > 255) blue = 10 * i;
     if (white > 50) white = 0;
       
     if (red < 0) red = 50 * i;
     if (green  < 0) green = 15 * i;
     if (blue < 0) blue = 10 * i;
     if (white  < 0 ) white = 0;

   
 }
}

