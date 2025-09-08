#include <stdio.h>

int Control(int altitude) { //Used to define the flow for when to turn on or off the thrusters.
  int thruster = 0;

  if (altitude > 100) // If our rocket is over 100, turn off thrusters
	  thruster = 0;
  else if (altitude > 0) // If our rocket is over 0, turn on thrusters
	  thruster = 1;
  else
	  thruster = 0; // In any other scenario, such as 0 or -1, turn off thrusters. 

  return thruster;
}

void Test(int altitude) {  // Compares the control function to this function
  int thruster = Control(altitude);
  int behaviorCorrect = (altitude > 100 && thruster == 0) || // Used to define at which altitudes the thrusters should be on or off. 
                        (altitude <= 100 && altitude > 0 && thruster == 1) ||
                        (altitude <= 0 && thruster == 0);
  char *behaviorCorrectIcon = behaviorCorrect ? "GOOD" : "BAD"; // Changed the code from emojis to good or bad statement. 
  printf("For altitude %3d, your thruster is %d |%s|\n", altitude, thruster,
         behaviorCorrectIcon); // Displayed message
}

int main(void) { //This is the main loop that inputs different values into the test function, that then returns a statement of the altitude, the state of the thruster and a GOOD or BAD depending on whether or not that is the expected behaviour. 
  Test(150);
  Test(100);
  Test(50);
  Test(0);
  Test(-1);
}