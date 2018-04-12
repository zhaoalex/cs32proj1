//
//  Flatulan.h
//  CS 32, Project 1: It's a Gas
//
//  Created by Alex Zhao on 1/11/18.
//  UID: 904907409
//

#ifndef Flatulan_h
#define Flatulan_h

class City;  // This is needed to let the compiler know that City is a
// type name, since it's mentioned in the Flatulan declaration.

class Flatulan
{
public:
    // Constructor
    Flatulan(City* cp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool possiblyGetConverted();
    
private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif /* Flatulan_h */
