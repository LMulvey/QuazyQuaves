//
//  graphics.h
//  Quazy Quaves
//
//  Created by Lee Mulvey on 2019-03-31.
//  Copyright © 2019 Lee Mulvey. All rights reserved.
//

/**
 * Graphics class
 * Holds all information relevant to rendering
 * */

#ifndef graphics_h
#define graphics_h

#include <map>
#include <string>

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
    Graphics();
    ~Graphics();
    
    /**
     * SDL_Surface* loadImage
     * Loads an image into the _spriteSheets map if it doesn't already exist.
     * Each image will only be loaded once.
     * Returns the image from the map regardless of whether or not it was just loaded
     * */
    SDL_Surface* loadImage(const std::string &filePath);
    
    /**
     * void blitSurface
     * Draws a texture to a certain part of the screen - whatever destination rectangle is
     * */
    void blitSurface(SDL_Texture* texture, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);
    
    /**
     * void flip
     * Renders everything to the screen
     * */
    void flip();
    
    /**
     * void clear()
     * Clears the screen
     * */
    void clear();
    
    /**
     * SDL_Renderer* getRenderer
     * Returns the renderer
     * */
    SDL_Renderer* getRenderer() const;
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
    
    std::map<std::string, SDL_Surface*> _spriteSheets;
};

#endif /* graphics_h */
