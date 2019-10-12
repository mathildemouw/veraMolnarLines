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
    ofSeedRandom(400 * 20);
    ofSetColor(255);
    
    for (i =  0; i < 20; i ++) {
        newi = ofMap(i, 0, 20, 0, ofGetScreenHeight() - offsetFromBottom);
      ofDrawRectangle(ofRandom(ofGetScreenWidth() * 2), newi + 197 , ofRandom(20), 20);
    }

    // short angled lines
    
    // length of line is mostly controlled by slopeX
    // angle of line is mostly controlled by slopeY

    // [x] each horizontal line has one, two three, four, five or 0 short lines lying on it from their centers
    // [] short angled lines always bisect horizontal lines
    
    ofSetColor(0);
    // TODO: play around with  this seed to adjust slopes and frequency of small lines crossing horizontal lines
    ofSeedRandom(mouseX);
    cout  <<  mouseX << endl;
    // 326 is a  pretty good one
    
     for (i =  0; i < 20; i ++) {
         newi = ofMap(i, 0, 20, 0, ofGetScreenHeight() - offsetFromBottom);
         float j;
         float centerX = ofRandom(700) + 200;//(ofNoise(i * 0.9) * 2000.0);
         float centerY = newi + 200;
         float slopeY = ofRandom(25) + 5;
         float slopeX = ofRandom(40) + 5;

         for (j =  0; j < ofRandom(5); j ++) {
             ofDrawLine(centerX + slopeX,
                        centerY - slopeY,
                        centerX,
                        centerY
                        );

             ofDrawLine(centerX,
                        centerY,
                        centerX - slopeX,
                        centerY + slopeY
                        );
         };
     };
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
