# IoT-Based Car Security System

## Description

This project is an IoT-based car security system using an ESP32,
IR sensor and buzzer.

The IR sensor detects unauthorized movement or an object near the
protected area. When an intrusion is detected, the ESP32 activates
the buzzer and LED.

## Components

- ESP32
- IR Sensor
- Buzzer
- LED
- Jumper Wires
- Breadboard

## Software

- Arduino IDE
- C/C++

## Working

IR Sensor → ESP32 → Buzzer + LED

The ESP32 continuously monitors the IR sensor. When an object is
detected, the buzzer is activated as an alarm.

## Future Enhancement

- Wi-Fi notification
- Firebase integration
- Web dashboard
- Mobile application
- GPS tracking
