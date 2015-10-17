//
//  randomWalker.hpp
//  NOC_I_3_RandomWalkTraditional
//
//  Created by Benjamin Yoshiwara on 10/17/15.
//
//
#include "ofMain.h"

#ifndef randomWalker_h
#define randomWalker_h

class Walker {
public:
    
    //Constructor
    Walker();
    
    //Methods
    void draw();
    void step();
    
    //Properties
    int x;
    int y;
};

#endif /* randomWalker_h */