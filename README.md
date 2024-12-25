# T9602 Sensor MQTT Publisher

This project reads Telaire T9602 temperature and humidity sensor data and prints it to serial.
It's designed to run on Arduino/ESP8266/ESP32 modules.

## Features

- Reads temperature and humidity data from the Telaire T9602 sensor.

## Getting Started
On Wemos D1 mini use i2c pins (D1(GPIO 5)-SCL,D2(GPIO 4)-SDA) to connect the T9602 sensor.

[Amphenol Telaire T9602](https://www.amphenol-sensors.com/en/telaire/humidity/527-humidity-sensors/3224-t9602)

[T9602 Datasheet](https://www.farnell.com/datasheets/1872050.pdf)

##  Sensor specifications

  * IP67 rated sensor with two sealing membranes
  * -20 to 70 °C temperature range
  * Accuracy: ±2% RH, 0-95% RH ±0.5°C
  * 14 bit ADC resolution

## Sensor cable pinout

| **Color** |   **Signal**   |
|-----------|----------------|
| Red       | V+             |
| Green     | GND            |
| White     | SDA            |
| Black     | SCL            |

![T9602 pinout](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS4IXIdSB64S-NKB0MQdY745BLXDTEJgOI-VA&usqp=CAU)

[Internally used ChipCap2 sensor module reference guide](https://www.amphenol-sensors.com/hubfs/Documents/AAS-916-127J-Telaire-ChipCap2-022118-web.pdf?Itemid=8487+%27)

### Prerequisites

- An ESP8266 module (e.g., Wemos D1 Mini, NodeMCU).
- A Telaire T9602 temperature and humidity sensor.
- Arduino IDE or PlatformIO for code editing and ESP8266 programming.

### Installation

1. Clone this repository to your local machine or download the ZIP file and extract it.
2. Open the project in the Arduino IDE.
3. Connect the T9602 sensor to your ESP8266 module according to the sensor's datasheet.
4. Upload the code to your microcontroller module.

## Usage

Once powered, the sensor values will be printed via serial interface.
It will then periodically read temperature and humidity data from the T9602 sensor and output it via serial.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
