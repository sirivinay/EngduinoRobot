/* EngduinoRobot.h
* Header file for EngduinoRobot Library
*/

#ifndef __ENGDUINOROBOT_H__
#define __ENGDUINOROBOT_H__


#include <Engduino.h>
#include "Arduino.h"

class EngduinoRobot
{ 
public:
	EngduinoRobot();
	void begin(int motorPin);
	void setMotor(int pin, int speed); //function to set the motor to a certain speed
	void buttonAccelerate(int motorPin); // function to produce a relatively smooth acceleration
};

#endif