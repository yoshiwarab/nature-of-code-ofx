//
//  randomWalker.cpp
//  NOC_I_3_RandomWalkTraditional
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
    float num = ofRandom(1);

    if (num < 0.3) {
        x += 1;
    } else if (num < 0.6) {
        y += 1;
    } else if (num < 0.8) {
        x -= 1;
    } else {
        y -= 1;
    }
}