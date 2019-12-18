#pragma once

#include "ofMain.h"
#include "ofxApp.h"

#define FAKE_LOAD_SCREEN_DURATION 2.0

class ofApp : public ofBaseApp, public ofxAppDelegate{

public:
	
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	//ofxApp imposed - responder methods
	void	ofxAppPhaseWillBegin(ofxApp::Phase);
	bool	ofxAppIsPhaseComplete(ofxApp::Phase){return true;};
	void	ofxAppDrawPhaseProgress(ofxApp::Phase, const ofRectangle & r){};
	string 	ofxAppGetStatusString(ofxApp::Phase){return "";};
	float	ofxAppGetProgressForPhase(ofxApp::Phase){return 1.0;};
	void	ofxAppContentIsReady(const string & contentID, vector<ContentObject*>){};

	float phaseStartTime;

	vector<string> slideshow;
	int index = -1;

	ofScaleMode scaleMode = OF_SCALEMODE_FIT;
};
