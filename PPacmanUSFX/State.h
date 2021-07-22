#pragma once
class State
{
protected:
	bool indestructible;
	int velocidad;
public:
	bool getIndestructible(){ return indestructible; }
	int getVelocidad() { return velocidad; }
};

