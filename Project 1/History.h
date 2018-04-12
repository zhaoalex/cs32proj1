//
//  History.h
//  CS 32, Project 1: It's a Gas
//
//  Created by Alex Zhao on 1/11/18.
//  UID: 904907409
//

#ifndef History_h
#define History_h

#include "globals.h"

class History
{
public:
    // Constructor
    History(int nRows, int nCols);
    
    // Mutator
    bool record(int r, int c);
    
    // Accessor
    void display() const;
private:
    int m_rows;
    int m_cols;
    char m_history[MAXROWS][MAXCOLS];
};

#endif /* History_h */
