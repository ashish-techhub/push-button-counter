#include <LiquidCrystal.h>

// LCD Pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int buttonPin = 7;

int buttonState = 0;
int lastButtonState = 0;

int count = 0;

// Debounce variables
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {

  pinMode(buttonPin, INPUT);

  Serial.begin(9600);

  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Button Counter");

  lcd.setCursor(0, 1);
  lcd.print("Count: 0");
}

void loop() {

  int reading = digitalRead(buttonPin);

  // Debounce check
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // Stable reading check
  if ((millis() - lastDebounceTime) > debounceDelay) {

    if (reading != buttonState) {

      buttonState = reading;

      // Button pressed
      if (buttonState == HIGH) {

        count++;

        lcd.clear();

        lcd.setCursor(0, 0);
        lcd.print("Button Counter");

        lcd.setCursor(0, 1);
        lcd.print("Count: ");
        lcd.print(count);
        Serial.println(count);
      }
    }
  }

  lastButtonState = reading;
}