//
//  History.cpp
//  CS 32, Project 1: It's a Gas
//
//  Created by Alex Zhao on 1/11/18.
//  UID: 904907409
//

#include <iostream>

#include "History.h"
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols) {
    m_rows = nRows;
    m_cols = nCols;
    
    // initalize history array with all dots (all zero)
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            m_history[i][j] = '.';
        }
    }
}

/**
 * Called when a Flatulan is preached to but not converted; records said instance in history array.
 * Note: (r,c) in City coordinate system is [r-1][c-1] in array system
 **/
bool History::record(int r, int c) {
    if (r >= 1 && r <= m_rows && c >= 1 && c <= m_cols) { // check if coord is in bounds
        char& gridChar = m_history[r - 1][c - 1];
        switch (gridChar) {
            case '.':
                gridChar = 'A';
                break;
            case 'Z':
                break;
            default: // case 'B' through 'Y'
                gridChar++;
                break;
        }
        return true;
    }
    return false;
}

/**
 * Displays history array.
 **/
void History::display() const {
    clearScreen();
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            cout << m_history[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
