#pragma once
#include <SDL.h>
#include "MoveDirection.h"
#include "States.h"
#include <iostream>
using namespace std;

class GamePawnController
{
protected:
	MoveDirection direccionSiguiente;
	States estado_actor;
public:
	
	MoveDirection getDireccionSiguiente() { return direccionSiguiente; }
	States getStateActor() { return estado_actor; }
	
	virtual void handleEvent(SDL_Event* event) {};
	void setStateActor(States estado_) { estado_actor = estado_; cout << "pacamn normi" << endl; }
};

