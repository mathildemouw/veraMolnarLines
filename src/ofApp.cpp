#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    from https://www.studiointernational.com/images/articles/m/084-molnar-vera-2018/Molnar_Computer_Drawing_5_30x30cm.jpg
    ofSetBackgroundColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // horizontal lines
    float i;
    float newi;
    float offsetFromBottom  = 400;
    float marginLeft = 50;
    float marginRight = ofGetScreenWidth() - marginLeft;

    // TODO: explore varying this line to get closer to Molnár's variances
    ofSeedRandom(67);
    ofSetColor(0);
    
    for (i =  0; i < 20; i ++) {
        newi = ofMap(i, 0, 20, 0, ofGetScreenHeight() - offsetFromBottom);
        ofDrawLine(
                   // vary where the horizonatal line starts
                   (ofNoise(i * 0.9) * 200.0) + marginLeft,
                   newi + 200,
                   // draw lines all to be about the same length
                   // TODO: explore varying this line to get closer to Molnár's variances
                   ((ofNoise(i * 0.9) * 200.0) + marginLeft) + (ofGetScreenWidth() / 2) + ofRandom(20),
                   newi + 200
                   );
    }

    // deletion of horizontal line portions
    ofSeedRandom(mouseX * 20);
    ofSetColor(255);
    
    for (i =  0; i < 20; i ++) {
        newi = ofMap(i, 0, 20, 0, ofGetScreenHeight() - offsetFromBottom);
      ofDrawRectangle(ofRandom(ofGetScreenWidth()), newi - 3 , ofRandom(20), 20);
    }

    // short angled lines
    // are bisected by a horizonatal line
    // lengths are maximum 3x the width between horizontal lines
    // lengths are minimum 1/8 the width wetween horizontal lines
    // are going up and to the right at angles either 45 degrees or 25 degrees
    // each horizontal line has one, two three, four, five or 0 short lines lying on it from their centers
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
