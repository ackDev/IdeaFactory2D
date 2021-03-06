#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL2/SDL.h>

#include "Display.h"
#include "templates/GameScene.h"

class Graphics : protected Display {
private:
    SDL_Renderer* renderer;
    SDL_Color refreshColor;

    void setRenderDrawColor(SDL_Color color);
    void renderFill(GameScene);
    void renderOutline(GameScene);

public:
    enum RenderMode { FILL, OUTLINE };
    
    Graphics();

    void render(GameScene, RenderMode);
};

#endif