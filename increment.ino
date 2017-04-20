int redColor;
int greenColor;
int blueColor;
int whiteColor;
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
int red = 0, green= 0, blue = 0, white = 10;
int wait = 100;
int led = 0;
int num = 0;
void loop() {

for ( led = 0; led < 16; led++){    
  strip.setPixelColor(led, red, green , blue, white);
 
  strip.show();
    delay(wait);
 
  red = red + 8;
  green = green + 16;
  blue = blue + 32;
  white = white + 1;

 for ( num = 0; num++;){  

  // Increment the led.  This can also be done with led++
 
  

  if (red > 255) red = 5*num;
   if (green > 255) green = 6*num;
    if (blue > 255) blue = 7*num;
     if (white > 50) white = 8*num;
       
    if (red < 0) red = 5*num;
   if (green  < 0) green = 6*num;
    if (blue < 0) blue = 7*num;
     if (white  < 0 ) white = 8*num;
   Serial.print(" led= ");
   Serial.println(led);
  }
 }   
  
}


