#include "input.h"

void Input::beginNewFrame() {    //funzione chiamata nei casi di nuovo frame per 
	this->_pressKeys.clear();  //per resettare i pulsanti che non servono
	this->_releasedKeys.clear();
}


//Pulsante premuto
void Input::keyDownEvent(const SDL_Event& event) {
	this->_pressKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;
}

//Pulsante rilasciato

void Input::keyUpEvent(const SDL_Event& event) {
	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.kesym.scancode] = false;  //Falso perchè non stiamo più tenendo premuto il pulsante
}


//Controlla se un certo pulsante è stato premuto
bool Input::wasKeyPressed(SDL_Scancode key) {
	return this->_pressedKeys[key];
}


// Controlla se un certo pulsante è stato rilasciato
bool Input::wasKeyReleased(SDL_Scancode key) {
	return this->_releasedKeys[key];
}

bool Input::isKeyHeld(SDL_Scancode key) {
	return this->_heldKeys[key];
}
