//
//  graphics.h
//  Quazy Quaves
//
//  Created by Lee Mulvey on 2019-03-31.
//  Copyright © 2019 Lee Mulvey. All rights reserved.
//

#ifndef graphics_h
#define graphics_h

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
    Graphics();
    ~Graphics();
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
};

#endif /* graphics_h */
