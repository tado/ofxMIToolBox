#pragma once

#include "ofMain.h"
#include "ofxMIToolBox.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void generateVector();
    void mouseReleased(int x, int y, int button);
    
    double entropy, miTarget;
    uint vector[16];
    uint targetVector[16];
};
