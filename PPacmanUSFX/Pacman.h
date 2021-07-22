#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#include <SDL.h>

#include "GamePawn.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "MoveDirection.h"
#include "States.h"
#include "Moneda.h"
#include "GamePawnControllerKey1.h"
#include "State_pacman_normal.h"
#include "State_pacman_indestructible.h"

using namespace std;

class Pacman : public GamePawn
{
protected:

	State_pacman_normal* estado_normal = new State_pacman_normal();
	State_pacman_indestructible* estado_indestructible = new State_pacman_indestructible();
 	//static Pacman* instancia;

	//int estado;

	GameObjectType returType() { return PACMAN; }
public:
	//Constructores y destructores
	Pacman(Tile* _tile, Texture* _textura);
	~Pacman() {};

	//	static Pacman* crearInstancia(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);

	//Metodos accesores
	/*int getEstado() { return estado; }
	void setEstado(int _estado) { estado = _estado; }*/
	void setTileActual(Tile* _tileNuevo) override;

	// Metodos varios

	//Metodos virtuales, redefinidos o sobrecargados
	//void handleEvent(SDL_Event* event);
	// Mover pacman
	void update();
	// Renderizar imagen pacman
	void render() override;
	//void update();
	void deleteGameObject() override;
	//estado de pacman

};