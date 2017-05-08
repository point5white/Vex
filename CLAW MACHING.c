#pragma config(Sensor, dgtl1,  frontjoy,       sensorNone)
#pragma config(Sensor, dgtl2,  backjoy,        sensorNone)
#pragma config(Sensor, dgtl3,  leftjoy,        sensorNone)
#pragma config(Sensor, dgtl4,  rightjoy,       sensorNone)
#pragma config(Sensor, dgtl5,  clawopen,       sensorNone)
#pragma config(Sensor, dgtl6,  clawclose,      sensorTouch)
#pragma config(Sensor, dgtl7,  winchup,        sensorNone)
#pragma config(Sensor, dgtl8,  winchdown,      sensorNone)
#pragma config(Motor,  port2,           xmove,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           ymove,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           winch,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           claw,          tmotorVex393_MC29, openLoop)


//****SORRY EVERYBODY BUT IVE HAD THE THE FLU THEN I GOT MORE SICK, THIS SHOULD WORK IF IT DOSENT TELL JONATHAN H TO KIK ME AND I CAN SEE WHAT I CAN DO, SORRY AGAIN***//

task main()
{


	while(SensorValue(frontjoy) == 1)
	{
		motor[xmove] = 63;			          // move the x axis forwards


	}
	while(SensorValue(backjoy) == 1)
	{
		motor[xmove] = -63;			          // move the x axis backwards

	}
	while(SensorValue(leftjoy) == 1)
	{
		motor[ymove] = 63;			          // move the y axis left


	}
	while(SensorValue(rightjoy) == 1)

		motor[ymove] = -63;			          // move the y asix right


	}
	while(SensorValue(clawopen) == 1)
	{
		motor[claw] = 63;			          //open the claw


	}
	while(SensorValue(clawclose) == 1)
	{
		motor[claw] = -63;			          // close the claw


	}
	while(SensorValue(winchup) == 1)
	{
		motor[winch] = 63;			          // pull the winch up


	}
	while(SensorValue(winchdown) == 1)
	{
		motor[winch] = -63;			          // pull the winch down


	}
}
