//
//  globals.h
//  CS 32, Project 1: It's a Gas
//
//  Created by Alex Zhao on 1/10/18.
//  UID: 904907409
//

#ifndef globals_h
#define globals_h

///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////

const int MAXROWS = 20;               // max number of rows in a city
const int MAXCOLS = 30;               // max number of columns in a city
const int MAXFLATULANS = 100;         // max number of Flatulans allowed
const int INITIAL_PLAYER_HEALTH = 10;

const int UP      = 0;
const int DOWN    = 1;
const int LEFT    = 2;
const int RIGHT   = 3;
const int NUMDIRS = 4;

///////////////////////////////////////////////////////////////////////////
//  Auxiliary function declarations
///////////////////////////////////////////////////////////////////////////

int randInt(int min, int max);
void clearScreen();

#endif /* globals_h */
