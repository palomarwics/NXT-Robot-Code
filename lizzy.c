#pragma config(Sensor, S1,     TouchMeh,       sensorTouch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
motor[motorA]= 30;
motor[motorB]= 30;
wait1Msec(3000);


motor[motorA]= -70;
motor[motorB]= -70;
wait1Msec(2000);

motor[motorA] = 100;
motor[motorB] = -100;
wait1Msec(7000);

motor[motorA] = 0;
motor[motorB] = 67;
wait1Msec(1000);

if(SensorValue(TouchMeh) == 1)
	{
		motor[motorA] = -50;
		motor[motorB] = -50;
		wait1Msec(6000);
		motor[motorA] = -90;
		motor[motorB] = 90;
		wait1Msec(1000);
		motor[motorA] = 50;
		motor[motorB] = 50;
		wait1Msec(6000);
	}
	else 
	{
		(SensorValue(TouchMeh) == 0);
	}
}
