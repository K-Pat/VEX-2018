#pragma config(Motor,  port2,           fLeft,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           fRight,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           bLeft,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           bRight,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           Lift,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           fDisk,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																																																																						//
//																								BOTH JOYSTICKS CONTROLS																																			//
//																																																																						//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  while (true)
  {
		//Joystick Control
		motor[fLeft] = vexRT[Ch3];
		motor[fRight] = vexRT[Ch2];
		motor[bLeft] = vexRT[Ch3];
		motor[bRight] = vexRT[Ch2];

		void[] motor = fLeft, fRight, bLeft, bRight;

/*
		//6U - Launcher
 		if (vexRT[Btn6U] == 1) {
		  motor[launcher] = -127;
  	}
		else {
			motor[launcher] = 0;
		}
*/

		//5U & 5D - Flip Disk
	  if(vexRT[Btn5U] == 1) {
			motor[fDisk] = 100;}
		else if (vexRT[Btn5D]) {
			motor[fDisk] = -100;}
    else {
			motor[fDisk] = 0;
		}

		//Lift
		if(vexRT[Btn6U] == 1) {
			motor[Lift] = 100;}
		else if (vexRT[Btn6D]) {
			motor[Lift] = -100;}
    else {
			motor[Lift] = 0;
		}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																																																																						//
//																								SINGLE JOYSTICKS CONTROLS																																		//
//																																																																						//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Joystick Control
		//Forward / Backward
		motor[fLeft] = vexRT[Ch2];
		motor[fRight] = vexRT[Ch2];
		motor[bLeft] = vexRT[Ch2];
		motor[bRight] = vexRT[Ch2];

		//Turns (code below is turning right, reversed is turning left)
		motor[fLeft] = vexRT[Ch1];
		motor[fRight] = vexRT[Ch1]*-1;
		motor[bLeft] = vexRT[Ch1];
		motor[bRight] = vexRT[Ch1]*-1;


		//Lift
		motor[Lift] = vexRT[Ch3];

		//Flip disk
		motor[fDisk] = vexRT[Ch4];

		}
}
