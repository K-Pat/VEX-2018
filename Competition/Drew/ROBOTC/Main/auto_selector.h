#pragma config(Motor,  port1,           dBackRight,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           piston,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           dFrontLeft,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           intake,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           flipper,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           dFrontRight,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           lift,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           dBackLeft,     tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#ifndef AUTO_SELECTOR_H_
#define AUTO_SELECTOR_H_


void getInput()
{
	if(vexRT[Btn5D] == 1) currentSelection = RED_FRONT;
	if(vexRT[Btn5U] == 1) currentSelection = RED_BACK;
	if(vexRT[Btn6D] == 1) currentSelection = BLUE_FRONT;
	if(vexRT[Btn6U] == 1) currentSelection = BLUE_BACK;
}

void doAuto()
{
	switch(currentSelection)
	{
	case RED_FRONT:
		moveBackward(500, MAX_SPEED);
		fireBall(true);
		moveBackward(2000, MAX_SPEED);
		moveForward(1000, MAX_SPEED);
		break;

	case RED_BACK:
		fireBall(true);
		moveBackward(600, MAX_SPEED);
		rightSpin(400, MAX_SPEED);
		moveBackward(2500, MAX_SPEED);
		break;
	case BLUE_FRONT:
		moveBackward(500, MAX_SPEED);
		fireBall(true);
		moveBackward(2000, MAX_SPEED);
		moveForward(1000, MAX_SPEED);
		break;

	case BLUE_BACK:
		fireBall(true);
		moveBackward(600, MAX_SPEED);
		leftSpin(400, MAX_SPEED);
		moveBackward(2500, MAX_SPEED);
		break;

	default:
		break;
	}
}

#endif
