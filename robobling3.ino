
#include <Adafruit_NeoPixel.h>

#define PIN              6
#define NUM_PIXELS       58

#define VSTRAND_V	 17
#define VSTRAND_H	 30

#define			__ -1	/* More visible fillers */

byte neoArray[VSTRAND_V][VSTRAND_H] = {
  { __, __, __, __,  0,  1,  2,  3,  4,  5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, __, __, __, __, __, __, __, __}, //0
  //                 P H Y S I C S
  { __, __, __, __, __, __, __, 18, 19, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __}, //1
  //                     graph top corner
  { __, __, __, __, __, __, __, __, __, 20, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __}, //2
  //                     graph corner cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, 21, 22, 23, 24, __, __, __, __, __, __, __, __, __, __, __, __, __}, //3
  //                                                D A T A
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 25, 26, 27, 28, 29, 30, 31, __}, //4
  //                                                                                    F O R M U L A S
  { 57, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __}, //5
  //graph bottom corner
  { __, 56, 55, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __}, //6    ex totes 10
  //graph bottom cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, 47, 46, 45, 44, 43, 42, __, __, __, __, __, __, __, __, __, __, __}, //7
  //                                                R E S U L T S
  { __, 54, 53, 52, 51, 50, 49, 48, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __}, //8
  //S P I R I T U A L    A P P L I C A T I O N 
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 32, 33, __}, //9
  //                                                                                       top corner example problems
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 34}, //10
  //                                                                                                 top examples cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 35}, //11
  //                                                                                                 top examples cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 36}, //12
  //                                                                                                 top examples cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 41, __, __, __, __, __, __}, //13
  //                                                                                     bottom corner example problems
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 40, __, __, __, __, __, __}, //14
  //                                                                                     bottom examples cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 39, __, __, __, __, __, __}, //15
  //                                                                                     bottom examples cont.
  { __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, 38, 37, __, __, __, __, __}, //16
  //                                                                                     bottom examples cont.
};

#undef __

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  
  // Some example procedures showing how to display to the pixels:
  colorWipe(strip.Color(255,215,0), 50); // Gold
  colorWipe(strip.Color(255, 0, 0), 50); // Red
  colorWipe(strip.Color(255,215,0), 50); // Gold
  colorWipe(strip.Color(0, 255, 0), 50); // Green
  colorWipe(strip.Color(255,215,0), 50); // Gold
  colorWipe(strip.Color(0, 0, 255), 50); // Blue

  // Send a theater pixel chase in...

  theaterChase(strip.Color(255, 215,   0), 50); // Gold
  theaterChase(strip.Color(127, 127, 127), 50); // White
  theaterChase(strip.Color(127,   0,   0), 50); // Red
  theaterChase(strip.Color(  0,   0, 127), 50); // Blue

  rainbow(20);
  rainbowCycle(20);
  theaterChaseRainbow(50);
}

// Set LEDs in a virtual strand driving physical strands
void vStrand(int pixel, uint32_t c) {
  int j;

  for(j = 0; j < VSTRAND_V; j++) {
    if(neoArray[j][pixel] >= 0)
      strip.setPixelColor((uint16_t)neoArray[j][pixel], c);
  }
}

// Set LEDs in a virtual strand driving physical strands in lines
void vStrand(int line, int pixel, uint32_t c) {
  if(neoArray[line][pixel] >= 0)
    strip.setPixelColor((uint16_t)neoArray[line][pixel], c);
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for (uint16_t i = 0; i < VSTRAND_H; i++) {
      vStrand(i, c);
      strip.show();
      delay(wait);
  }
}

// colorWipe for 1 line
void colorWipe(int line, uint32_t c, uint8_t wait) {
  for (uint16_t i = 0; i < VSTRAND_H; i++) {
      vStrand(line, i, c);
      strip.show();
      delay(wait);
  }
}

// colorWipe for 2 lines
void colorWipe(int line1, int line2, uint32_t c, uint8_t wait) {
  for (uint16_t i = 0; i < VSTRAND_H; i++) {
      vStrand(line1, i, c);
      vStrand(line2, i, c);
      strip.show();
      delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<VSTRAND_H; i++) {
      vStrand(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//rainbow for one line
void rainbow(int line, uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<VSTRAND_H; i++) {
      vStrand(line, i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//rainbow for two lines
void rainbow(int line1, int line2, uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<VSTRAND_H; i++) {
      vStrand(line1, i, Wheel((i+j) & 255));
      vStrand(line2, i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< VSTRAND_H; i++) {
      vStrand(i, Wheel(((i * 256 / VSTRAND_H) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < VSTRAND_H; i=i+3) {
        vStrand(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i=0; i < VSTRAND_H; i=i+3) {
        vStrand(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
        for (int i=0; i < VSTRAND_H; i=i+3) {
          vStrand(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
        }
        strip.show();
       
        delay(wait);
       
        for (int i=0; i < VSTRAND_H; i=i+3) {
          vStrand(i+q, 0);        //turn every third pixel off
        }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

