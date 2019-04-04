//
//  graphics.cpp
//  Quazy Quaves
//
//  Created by Lee Mulvey on 2019-03-31.
//  Copyright © 2019 Lee Mulvey. All rights reserved.
//

#include <SDL2/SDL.h>
#include "graphics.h"

/*
 * Graphics Class
 * Holds all information dealing with graphics for the game
 * */

int SCREEN_WIDTH{ 640 };
int SCREEN_HEIGHT{ 480 };

Graphics::Graphics() {
    SDL_CreateWindowAndRenderer(SCREEN_WIDTH, SCREEN_HEIGHT, 0, &this->_window, &this->_renderer);
    SDL_SetWindowTitle(this->_window, "Hello");
}

Graphics::~Graphics() {
    SDL_DestroyWindow(this->_window);
}
