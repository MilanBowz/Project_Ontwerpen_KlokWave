/*
  74HC595 Shift Register with 7-segment LED display
  74hc595-7segdisplay.ino
  Display on 7-segment Common Cathode LED display

  DroneBot Workshop 2020
  https://dronebotworkshop.com
*/

// Define Connections to 74HC595
//#include "RTClib.h"

// RCLK pin 12
const int latchPin = 10;
const int latchPinDec = 9;
// SH_CP pin 11
const int clockPin = 11;
// DS pin 14 / INVOER /
const int dataPin = 12;

// Time tracking
unsigned long previousMillis = 0;
const long interval = 1000; // 1 second
int hours = 12, minutes = 0, seconds = 0;

// Inverted patterns for characters 0-9
int datArray[10] = {0B11000000,  // 0
                    0B11111001,  // 1
                    0B10100100,  // 2
                    0B10110000,  // 3
                    0B10011001,  // 4
                    0B10010010,  // 5
                    0B10000010,  // 6
                    0B11111000,  // 7
                    0B10000000,  // 8
                    0B10010000}; // 9


const int buttonPin = A0;
const int buttonPin2 = A1;
const int buttonPin3 = A2;
const int buttonOut = 7;


void setup ()
{
  Serial.begin(57600);
  // Setup pins as Outputs
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonOut, OUTPUT);
}
void loop()
{
  // Simulate clock using millis()
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    seconds++;
    if (seconds >= 60) {
      seconds = 0;
      minutes++;
      if (minutes >= 60) {
        minutes = 0;
        hours++;
        if (hours >= 24) hours = 0;
      }
    }
  }
  // Read button state with debouncing
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(buttonOut, HIGH);
    Serial.println("Button Pressed!");
    delay(200); // Debounce
  }
  else{
    digitalWrite(buttonOut, LOW);
    Serial.println("Button Released!");
    delay(200); // Debounce
  }
  if (digitalRead(buttonPin2) == LOW) {
    Serial.println("Button 2 Pressed!");
    delay(200); // Debounce
  }
  if (digitalRead(buttonPin3) == LOW) {
    Serial.println("Button 3 Pressed!");
    delay(200); // Debounce
  }
  // ST_CP LOW to keep LEDs from changing while reading serial data
  // Shift out the bits
  digitalWrite(latchPin, LOW);
  //shiftOut(dataPin, clockPin, MSBFIRST, datArray[seconds % 10]);
  //shiftOut(dataPin, clockPin, MSBFIRST, datArray[seconds / 10]);
  //shiftOut(dataPin, clockPin, MSBFIRST, datArray[minutes % 10]);
  shiftOut(dataPin, clockPin, MSBFIRST, datArray[seconds % 10]);
  // ST_CP HIGH change LEDs
  digitalWrite(latchPin, HIGH);
}