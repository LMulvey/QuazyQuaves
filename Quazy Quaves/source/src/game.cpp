//
//  game.cpp
//  Quazy Quaves
//
//  Created by Lee Mulvey on 2019-04-02.
//  Copyright © 2019 Lee Mulvey. All rights reserved.
//

#include <SDL2/SDL.h>
#include "game.h"
#include "graphics.h"
#include "input.h"

/*
 * Game class
 * Holds all the information for our main game loop
 * */

namespace {
    const int FPS{ 50 };
    const int MAX_FRAME_TIME{ 5 * 1000 / FPS };
}

Game::Game() {
    SDL_Init(SDL_INIT_EVERYTHING);
    this->gameLoop();
};

Game::~Game() {
    
};

void Game::gameLoop() {
    Graphics graphics;
    Input input;
    SDL_Event event;
    
    int LAST_UPDATE_TIME_MS = SDL_GetTicks();
    
    // Start the game loop
    while (true) {
        input.beginNewFrame();
        
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_KEYDOWN) {
                if (event.key.repeat == 0) {
                    input.keyDownEvent(event);
                }
            } else if (event.type == SDL_KEYUP) {
                input.keyUpEvent(event);
            } else if (event.type == SDL_QUIT) {
                return;
            }
        }
        
        if (input.wasKeyPressed(SDL_SCANCODE_ESCAPE)) {
            return;
        }
        
        const int CURRENT_TIME_MS = SDL_GetTicks();
        int ELAPSED_TIME_MS = CURRENT_TIME_MS - LAST_UPDATE_TIME_MS;
        
        // MAX_FRAME_TIME is the max amount of time for a frame
        this->update(std::min(ELAPSED_TIME_MS, MAX_FRAME_TIME));
        LAST_UPDATE_TIME_MS = CURRENT_TIME_MS;
    }
};

void Game::draw(Graphics &graphics) {
    
};

void Game::update(float elapsedTime) {
    
};
