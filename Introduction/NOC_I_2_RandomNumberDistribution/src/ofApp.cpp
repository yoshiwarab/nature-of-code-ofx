#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    randomCounts.resize(20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int index = int(ofRandom(randomCounts.size()));
    randomCounts[index]++;
    ofSetColor(170, 170, 170);
    ofFill();
    int w = ofGetWindowWidth()/randomCounts.size();
    
    for (int x = 0; x < randomCounts.size(); x++) {
        ofRect(x*w, ofGetWindowHeight()-randomCounts[x], w-1, randomCounts[x]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
