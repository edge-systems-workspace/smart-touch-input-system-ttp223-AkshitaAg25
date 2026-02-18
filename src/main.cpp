#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223 capacitive sensor
 * @author Akshita Ag (AkshitaAg25)
 * @date 2026-02-18
 * @version 1.0
 *
 * @details
 * Reads digital touch input from a TTP223 capacitive touch sensor
 * connected to digital pin 5. The sketch reads the sensor state and
 * prints a structured message to the Serial Monitor every 500 ms.
 *
 * The current implementation:
 *  - Uses digitalRead on pin 5 to detect touches (HIGH = touched).
 *  - Prints "Touched" or "Not Touched" at 9600 baud every 500 ms.
 *
 * Change log:
 *  - 2026-02-18: Updated file header with author, date, version, and
 *    detailed description of current behavior.
 *
 * @note
 * Ensure the Serial Monitor is set to 9600 baud to view output.
 */

int touchPin = 5;

void setup() {
    pinMode(touchPin, INPUT);
    Serial.begin(9600);


}

void loop() {
    int state=digitalRead(touchPin);
    if (state==HIGH) {
        Serial.println("Touched");
    } else {
        Serial.println("Not Touched");
    }
    delay(500);
}
