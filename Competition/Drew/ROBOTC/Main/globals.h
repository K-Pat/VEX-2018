#ifndef GLOBALS
#define GLOBALS

//	motors.h
#define MAX_SPEED 127
#define REV_SPEED -127
#define MIN_SPEED 1
#define NO_SPEED 0

//	auto_functions.h
float PISTON_LENGTH = 4600; //Time it takes for piston to fire

typedef enum AUTO_SELECTION {
	RED_FRONT,
	RED_BACK,
	BLUE_FRONT,
	BLUE_BACK,
	SKILLS,
} Autoselection;
Autoselection currentSelection = SKILLS; // Global Autonomous Selection

typedef enum LIFT_STATES {
	STOPPED,
	STARTED,
	READY
} Liftstate;
Liftstate mainLift = STOPPED; // Global liftstate

#endif /* GLOBALS */
