//
//  Game.h
//  CS 32, Project 1: It's a Gas
//
//  Created by Alex Zhao on 1/11/18.
//  UID: 904907409
//

#ifndef Game_h
#define Game_h

class City; // forward declaration

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nFlatulans);
    ~Game();
    
    // Mutators
    void play();
    
private:
    City* m_city;
};

// Auxillary function declaration
int decodeDirection(char dir);


#endif /* Game_h */
