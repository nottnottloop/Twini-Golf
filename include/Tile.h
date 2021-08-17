#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "Entity.h"
#include "Math.hpp"

class Tile : public Entity
{
    public: 
    Tile(Vector2f p_pos, SDL_Texture* p_tex);

    private:
};