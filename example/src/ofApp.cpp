#include "ofApp.h"

void ofApp::setup(){
    ofBackground(0);
    generateVector();
    cout << "firstEntropy = " << entropy << endl;
}

void ofApp::update(){
    
}

void ofApp::draw(){
    string vectorMsg;
    vectorMsg = "Vector = ";
    for (int i = 0; i < 16; i++) {
        vectorMsg += ofToString(vector[i]);
    }
    ofSetColor(255);
    ofDrawBitmapString(vectorMsg, 20, 20);
    
    string targetMsg;
    targetMsg = "Target Vector = ";
    for (int i = 0; i < 16; i++) {
        targetMsg += ofToString(targetVector[i]);
    }
    ofSetColor(255);
    ofDrawBitmapString(targetMsg, 20, 40);
    
    ofDrawBitmapString("Entropy = " + ofToString(entropy), 20, 60);
    ofDrawBitmapString("MutualInformation = " + ofToString(miTarget), 20, 80);
}

void ofApp::generateVector(){
    for (int i = 0; i < 16; i++) {
        vector[i] = uint(ofRandom(2));
        targetVector[i] = uint(ofRandom(2));
    }
    entropy = calcEntropy(vector, 16);
    miTarget = calcMutualInformation(vector, targetVector, 16);
}

void ofApp::mouseReleased(int x, int y, int button){
    generateVector();
}
