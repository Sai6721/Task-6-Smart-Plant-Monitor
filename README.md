# Task-6-Smart-Plant-Monitor
# Task 6 - Smart Plant Monitor

## Objective
Build an IoT-based Smart Plant Monitor that reads soil moisture, sends data to the cloud, and alerts the user when the soil becomes dry.

## Components
- ESP32
- Soil Moisture Sensor
- Buzzer or LED
- Jumper Wires
- WiFi Connection

## Features
- Reads soil moisture level.
- Converts sensor values into percentage.
- Sends moisture data to Adafruit IO.
- Turns on buzzer/LED when soil moisture is low.
- Sends alert to cloud.

## Working
1. Read moisture value.
2. Convert it into percentage.
3. Upload value to cloud.
4. Compare with threshold.
5. If moisture is below threshold, activate buzzer and send alert.
6. Repeat after every minute.

## Output
- Moisture percentage displayed.
- Alert generated when soil is dry.