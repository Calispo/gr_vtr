#ifndef INPUT_H
#define INPUT_H

#include <map>

class Input {
public:
	void beginNewFrame();
	void keyUpEvent(const SDL_Event& event);  // pulsante premuto
	void keyDownEvent(const SDL_Event& event); //pulsante rilasciato
	bool wasKeyPressed(SDL_Scancode key);    // è stato premuto il pulsante
	bool wasKeyReleased(SDL_Scancode key); // è stato rilasciato il pulsante
	bool isKeyHeld(SDL_Scancode key); //Sta venendo premuto il pulsante?
private:
	std::map<SDL_Scancode, bool> _heldKeys; //indica quali pulsanti sono premuti
	std::map<SDL_Scancode, bool> _pressedKeys;
	std::map<SDL_Scancode, bool> _releasedKeyes;

};



#endif
