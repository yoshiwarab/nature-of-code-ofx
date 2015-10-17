//
//  randomWalker.cpp
//  NOC_I_1_RandomWalkTraditional
//
//  Created by Benjamin Yoshiwara on 10/17/15.
//
//

#include <stdio.h>
#include "randomWalker.h"

Walker::Walker(){
    // Initial x position of the walker
    x = ofGetWindowWidth()/2;
    
    // Initial y position of the walker
    y = ofGetWindowHeight()/2;
}

void Walker::draw(){
    ofSetColor(0, 0, 0);
    ofFill();
    ofCircle(x, y, 1);
}

void Walker::step() {
    float choice = int(ofRandom(4));
    
    if (choice == 0) {
        x++;
    } else if (choice == 1) {
        x--;
    } else if (choice == 2) {
        y++;
    } else {
        y--;
    }
    
}