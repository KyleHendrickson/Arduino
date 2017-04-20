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
  int num = 0;
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 100;

  void loop() {
  
    led = 0; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 1; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
       
    led = 2; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 3; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 4; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
    led = 5; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
   
    led = 6; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 7; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 8; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 9; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 10; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 11; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 12; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 13; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
     led = 14; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);  
     strip.show();
    
    led = 15; red = 255; green = 16; blue = 8; white = 10; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
  
   led = 0; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 1; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
       
    led = 2; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 3; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 4; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
    led = 5; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
   
    led = 6; red = 500; green = 0; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 7; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 8; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 9; red = 500; green = 0; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 10; red = 500; green = 0; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 11; red = 500; green = 0; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 12; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 13; red = 500; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
     led = 14; red = 500; green = 0; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);  
     strip.show();
    
    led = 15; red = 500; green = 0; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();

  led = 0; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 1; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
       
    led = 2; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 3; red = 0; green = 500; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 4; red = 0; green = 500; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
    led = 5; red = 0; green = 500; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
   
    led = 6; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 7; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 8; red = 0; green = 500; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 9; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 10; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 11; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 12; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 13; red = 0; green = 500; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
     led = 14; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);  
     strip.show();
    
    led = 15; red = 0; green = 500; blue = 0; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();

  led = 0; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 1; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
       
    led = 2; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 3; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 4; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
    led = 5; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
   
    led = 6;  red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 7;  red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 8;  red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 9;  red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 10; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 11; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 12; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 13; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
     led = 14; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);  
     strip.show();
    
    led = 15; red = 0; green = 0; blue = 500; white = 0;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
 
  led = 0; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 1; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
       
    led = 2; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 3; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 4; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
    led = 5; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
   
    led = 6; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 7; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 8; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 9; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 10; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 11; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 12; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 13; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
     led = 14; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);  
     strip.show();
    
    led = 15; red = 0; green = 0; blue = 0; white = 0; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
     led = 0; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 1; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
       
    led = 2; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 3; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
    
    led = 4; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
    led = 5; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
   
    led = 6;  red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 7;  red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 8;  red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 9;  red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 10; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
  
      led = 11; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 12; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
      led = 13; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
     strip.show();
     
     led = 14; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);  
     strip.show();
    
    led = 15; red = 0; green = 0; blue = 0; white = 500;
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
  

  }

