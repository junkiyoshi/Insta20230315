#include "ofApp.h"	

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetFrameRate(30);
	ofSetWindowTitle("openFrameworks");

	ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update() {

	
}

//--------------------------------------------------------------
void ofApp::draw() {

	ofTranslate(ofGetWindowSize() * 0.5);

	ofSeedRandom(39);
	for(int i = 0; i < 300; i++) {

		auto deg = ofRandom(360);
		auto radius = int(ofRandom(720) + ofGetFrameNum() * ofRandom(5, 10)) % 720;
		auto location = glm::vec2(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD));
		auto size = ofRandom(10, 30);
		size += 4;
		ofSetColor(0, 0, 255);
		ofDrawCircle(location, size);
	}

	ofSeedRandom(39);
	for (int i = 0; i < 300; i++) {

		auto deg = ofRandom(360);
		auto radius = int(ofRandom(720) + ofGetFrameNum() * ofRandom(5, 10)) % 720;
		auto location = glm::vec2(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD));
		auto size = ofRandom(10, 30);

		ofSetColor(255);
		ofDrawCircle(location, size);
	}
}

//--------------------------------------------------------------
int main() {

	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}