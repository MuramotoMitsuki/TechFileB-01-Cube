#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    BackgroundImage.load("sora.jpg");
    
    ofBackground(0,0,0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    
    ofToggleFullscreen();
    
    boxSize = 5;
    for (int i=0; i<NUM ; i++) {
        mBox[i].setPosition(ofRandom(-1000,1000),ofRandom(-1000,1000),ofRandom(-1000, 1000));
        mBox[i].set(boxSize);
    }
    
    sound.load("test.wav");
    sound.play();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //vec.set(mouseX-p,x,mouseY-p,y);
    
    BackgroundImage.draw(0,0,ofGetWidth(),ofGetHeight());
    
    vec.set(mouseX-p.x,mouseY-p.y);
    
    cam.begin();
    
    ofPushMatrix();
    
    ofRotateY(ofGetFrameNum());
    
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    int alpha = abs(vec.x) + abs(vec.y);
    ofSetColor(ofColor::fromHsb(ofGetFrameNum()%255, 255, 255), 255 -alpha);
    
    for(int i=0; i<NUM ; i++){
        mBox[i].draw();
    }
    
    ofPopMatrix();
    
    //ofSetColor(255,255,255);
    box.setPosition(0,0,0);
    box.set(150);
    //box.draw();
    
    ofSetColor(255, 255, 255,(ofGetFrameNum()*6)%120);
    box.drawWireframe();
    
    cam.end();
    
    p.x = mouseX;
    p.y = mouseY;
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
