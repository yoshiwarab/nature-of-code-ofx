//
//  randomWalker.cpp
//  NOC_I_4_WalkerToMouse
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
    int mX = ofGetAppPtr() -> mouseX;
    int mY = ofGetAppPtr() -> mouseY;
    
    if (num < 0.5) {
        int xDir = mX-x;
        int yDir = mY-y;
        if (xDir != 0) {
            xDir /= ABS(xDir);
        }
        if (yDir != 0) {
            yDir /= ABS(yDir);
        }
        x += xDir;
        y += yDir;
    } else {
        int xDir = int(ofRandom(-2, 2));
        int yDir = int(ofRandom(-2, 2));
        x += xDir;
        y += yDir;
    }
    x = ofClamp(x, 0, ofGetWindowWidth());
    y = ofClamp(y, 0, ofGetWindowHeight());
}