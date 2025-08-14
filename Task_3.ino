#include <LiquidCrystal.h>

// Create LCD object: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensorPin = A0;
float voltage, temperatureC;

void setup() {
  lcd.begin(16, 2);
  lcd.print("TMP35 Temp:");
  delay(1000);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  // Convert ADC reading (0–1023) to voltage (0–5V)
  voltage = sensorValue * (5.0 / 1023.0);
  
  // Convert voltage to temperature (TMP35 formula)
  temperatureC = (voltage - 0.5) * 100.0;  // °C
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C");

  delay(1000);
}
