# FutureVista: Human Following Robot
## Overview
FutureVista is an Arduino-based project designed to create a robot that follows humans using ultrasonic sensors. The robot can detect a person in front of it, determine the distance, and move towards the person while maintaining a safe following distance. It can also turn to follow the person if they change direction.

## Features
Human Following: Utilizes ultrasonic sensors to detect and follow a person based on distance.
Obstacle Avoidance: Can navigate around obstacles while following.
Direction Adjustment: Adjusts its direction to continue following the person.
Components
Arduino Uno
Ultrasonic Sensors (e.g., HC-SR04)
Motor Driver (e.g., L298N)
DC Motors with Wheels
Servo Motor
Chassis for mounting components
Battery Pack
Breadboard and Jumper Wires
Wiring Diagram

## Installation
Clone the repository:

bash
Copy code
git clone https://github.com/JayanthSrinivas06/Human-Following-Robot.git
Open the project in Arduino IDE:

Open file in the Arduino IDE.
Connect the Arduino to your computer:

Use a USB cable to connect the Arduino Uno to your computer.
Upload the code:

Select the correct board and port from the Tools menu.
Click on the upload button to upload the code to the Arduino.
Usage
Power on the robot:

Insert the batteries into the battery pack and switch on the power.
Place the robot on the ground:

Ensure it has enough space to move around.
Start the following mode:

The robot will start scanning for objects in front of it and will follow the closest person within range.
Code Explanation
Setup Function: Initializes the motors, sensors, and serial communication.
Loop Function: Continuously reads the distance from the ultrasonic sensors and adjusts the robot's movement accordingly.
Distance Calculation: Uses the time taken for the ultrasonic pulse to return to calculate the distance.
Movement Logic: Moves forward, stops, or turns based on the distance readings from the sensors.

## Team Members

| Name             | GitHub Profile                                |
|------------------|-----------------------------------------------|
| Rakesh Y         | [GitHub profile](https://github.com/Y-Rakesh) |
| Lalith V         | [GitHub profile](https://github.com/lalith17) |
| Sarvan Dattu P   | [GitHub profile](https://github.com/Sarvan05) |
| Sonika K         | --                                            |


Contact
For any questions or suggestions, feel free to reach out:

Email: jayanthsrinivas.b@gmail.com 
