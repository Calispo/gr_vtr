#ifndef GRAFICA_H
#define GRAFICA_H

struct SDL_Window;
struct SDL_Renderer;


class Grafica {
public:
	Grafica();    //costruttore -> creare finestra e inizalizzazione
	~Grafica();   //distruttore -> "eliminare finestra"
private:	
	SDL_Window* _window;
	SDL_Renderer* _renderer;

};

#endif