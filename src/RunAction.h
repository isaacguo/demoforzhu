/*
 * RunAction.h
 *
 *  Created on: May 11, 2016
 *      Author: isaac
 */


#ifndef RUNACTION_H_
#define RUNACTION_H_

#include "G4double.h"
#include <cstring>
#include <iostream>

class RunAction {
public:
	RunAction();
	virtual ~RunAction();

	void BeginOfRunAction();  //allocate 10 * size of type G4double in memeory and ask pointer total_energy to point to the first item
	void EndOfRunAction();  //set value of 1 to the place of 100 via pointer total_energy
	void panelEvent();  //print out total values via total_energy only from 0-9

	G4double * total_energy;

};

#endif /* RUNACTION_H_ */
