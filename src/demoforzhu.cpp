//============================================================================
// Name        : demoforzhu.cpp
// Author      : Isaac
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "RunAction.h"
using namespace std;

int main() {

	RunAction run;
	run.BeginOfRunAction(); //allocate 10 * size of type G4double in memeory and ask pointer total_energy to point to the first item
	run.panelEvent();//set value of 1 to the place of 100 via pointer total_energy
	run.EndOfRunAction(); ///print out total values via total_energy only from 0-9
	return 0;
}
