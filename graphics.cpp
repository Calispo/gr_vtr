#include <SDL.h>

#include "graphics.h"

/* Classe Grafica -> contiene tutte le info riguardanti 
la grafica del gioco (ovviamente)

*/

Grafica::Grafica() {    //costruttore che crea e inizializza finestra

	SDL_CreateWindowAndRenderer(640, 480, 0, &_window, &_renderer);  //Funzione di SDL2 che crea e renderizza finestra dimensioni 640x480
	SDL_SetWindowTitle(_window, "GRAVITAR");
}

Grafica::~Grafica() {     //Creo distruttore

	SDL_DestroyWindow(_window);   //chiamo la funzione di SDL2 che distrugge la finestra     
}