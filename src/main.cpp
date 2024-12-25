/*
 *  
 * Read Telaire T9602 temperature and humidity sensor data and print to serial
 *
 * Author: Bjoern Heller <tec aett sixtopia.net>
 */
#include "telaire_T9602.h"
#include <Arduino.h>
#include <Wire.h>

T9602 telaireSensor;

void setup() {
    Serial.begin(115200);
    telaireSensor.begin();
}

void loop() {

    telaireSensor.updateMeasurements();
    float temperature = telaireSensor.getTemperature();
    float humidity = telaireSensor.getHumidity();

    char temperatureString[8];
    dtostrf(temperature, 6, 2, temperatureString);
    char humidityString[8];
    dtostrf(humidity, 6, 2, humidityString);

    Serial.print("Temp: ");
    Serial.print(temperatureString);
    Serial.print("; Humidity: ");
    Serial.println(humidityString);

    // Toggle LED to indicate data
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);

    delay(1000); // Wait 1s before the next loop iteration
}