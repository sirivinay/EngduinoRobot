/* EngduinoRobot
* library for Engduino Robot
*/

#include "Arduino.h"
#include "EngduinoRobot.h"
#include "pins_arduino.h"
#include "EngduinoButton.h"

EngduinoRobot::EngduinoRobot()
{

}

void EngduinoRobot::begin(int motorPin)
{
	pinMode(motorPin, OUTPUT);
}


	void EngduinoRobot::setMotor(int pin, int speed)
{
	if(speed>= 0 && speed<=255)
	{
		analogWrite(pin,speed);
		delay(1000);
	}
}

void EngduinoRobot::buttonAccelerate(int motorPin)
{
	if (EngduinoButton.isPressed())
	{
		analogWrite(motorPin,0);
		delay(1000);
		analogWrite(motorPin,50);
		delay(1000);
		analogWrite(motorPin,100);
		delay(1000);
		analogWrite(motorPin,200);
		delay(1000);
		analogWrite(motorPin,250);
		delay(1000);
	}
}