#pragma config(Sensor, S1,     touch1,         sensorTouch)
#pragma config(Sensor, S2,     see1,           sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	
bool keepGoing = true;

while (keepGoing == true)
{

// while touch sensor is not pressed

  while(SensorValue(SensorValue(see1) > 50 && SensorValue(touch1) == 0))
  {
	
   motor[motorA]=50;
   motor[motorB]=50;
  }
 
  
  motor[motorA]=-100;
  motor[motorB]=-100;
  wait1Msec(500);
 
  motor[motorA]=0;
  motor[motorB]=0;
  wait1Msec(500);   
   

  motor[motorA]=-100;
  motor[motorB]=100;
  wait1Msec(500);

  motor[motorA]=0;
  motor[motorB]=0;
  wait1Msec(500);
  }
}
