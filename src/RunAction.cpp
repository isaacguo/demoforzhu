/*
 * RunAction.cpp
 *
 *  Created on: May 11, 2016
 *      Author: isaac
 */

#include "RunAction.h"

using namespace std;
static int num_scoring=10;


RunAction::RunAction() {
	// TODO Auto-generated constructor stub

}

RunAction::~RunAction() {
	// TODO Auto-generated destructor stub
}

void RunAction::panelEvent()
{

	total_energy[100].value+= 1;

}
void RunAction::BeginOfRunAction()
{
	// Initialize the panel energy array
	int size=num_scoring;
	total_energy = new G4double[size];
	for (int i = 0; i <size; i++)
	{
		total_energy[i].value=0;
	}
}

void RunAction::EndOfRunAction()
{
	for (int i = 0; i <num_scoring; i++)
	{
		cout<<total_energy[i].value<<endl;
	}

}
