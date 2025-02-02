#include "ofApp.h"
#include <vector>

vector<int> numbers;
//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}
//200 - numbers[i] - 
//--------------------------------------------------------------
void ofApp::draw(){
	int temp = 0;
	int midpointOfNext = 0;
	for (size_t i = 0; i < numbers.size(); i++) {
		midpointOfNext += 150;
		midpointOfNext -= 100 - (temp + numbers[i]);
		ofSetColor(255, 0, 0);
		ofDrawCircle(midpointOfNext, 300, numbers[i]);
		ofSetColor(255);
		ofDrawBitmapString(numbers[i], midpointOfNext, 300);
		temp = numbers[i];
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key) {
	case 'r':
		numbers.clear();
		for (int i = 0; i < 5; i++) {
			numbers.push_back(ofRandom(10, 101));
		}
		break;
	}
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
