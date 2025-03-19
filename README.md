# Arduino_Motor_Control
An Arduino project demonstrating how to control two DC motors using an L293D Motor Driver Module. The motors rotate clockwise for 3 seconds and then rotate anti-clockwise for 3 seconds.
Project Title: Arduino Motor Control with L293D Motor Driver

Description:
This project demonstrates how to control two DC motors using an Arduino and an L293D Motor Driver Module. The motors are programmed to rotate clockwise for 3 seconds and then anti-clockwise for 3 seconds.

Components Required:

Arduino UNO (or any compatible board)
L293D Motor Driver Module
Two DC Motors
External Power Supply (for motors)
Jumper Wires
Breadboard (if required)
Connections:

L293D to Arduino:

Motor 1:
Input1 ➔ Arduino Pin 2
Input2 ➔ Arduino Pin 3
Motor 2:
Input1 ➔ Arduino Pin 4
Input2 ➔ Arduino Pin 5
Enable Pins (EN1, EN2) ➔ Connect to 5V for enabling motors (or use PWM pins for speed control).
L293D to Motors:

Motor 1 ➔ M1 (Output pins of L293D)
Motor 2 ➔ M2 (Output pins of L293D)
L293D Power:

VCC ➔ 5V (for logic)
VCC2 (Motor power) ➔ External power supply (e.g., 9V - 12V)
GND ➔ Common ground with Arduino
How to Run:

Connect the components as described.
Upload the code to the Arduino board.
Power the motors using an external power supply.
Observe the motors rotating clockwise and anti-clockwise.
