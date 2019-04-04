//
//  game.h
//  Quazy Quaves
//
//  Created by Lee Mulvey on 2019-04-02.
//  Copyright © 2019 Lee Mulvey. All rights reserved.
//

#ifndef GAME_H
#define GAME_H

class Graphics;

class Game {
public:
    Game();
    ~Game();
    
private:
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);
};

#endif /* GAME_H */
