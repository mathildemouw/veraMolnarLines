#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    from https://www.studiointernational.com/images/articles/m/084-molnar-vera-2018/Molnar_Computer_Drawing_5_30x30cm.jpg
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float i;
    float newi;
    float offsetFromBottom  = 400;
    float marginLeft = 200;
    float marginRight = ofGetScreenWidth() - marginLeft;
    
    ofSetColor(0);
    for (i =  0; i < 20; i ++) {
        newi = ofMap(i, 0, 20, 0, ofGetScreenHeight() - offsetFromBottom);
        // vary where the horizonatal line starts
        ofDrawLine((ofNoise(i * 0.9) * 200.0) + marginLeft, newi + 200, ofGetScreenWidth() - ((ofNoise(i * 0.9) * 200.0) + marginLeft), newi + 200);
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
