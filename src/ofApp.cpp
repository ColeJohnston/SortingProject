#include "ofApp.h"
#include <vector>

vector<int> numbers;
//--------------------------------------------------------------
void ofApp::setup() {

}

//--------------------------------------------------------------
void ofApp::update() {

}
//200 - numbers[i] - 
//--------------------------------------------------------------
void ofApp::draw() {
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
void merge(std::vector<int>& arr, int left, int mid, int right) {
	std::vector<int> temp;
	int i = left, j = mid + 1;
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
		else temp.push_back(arr[j++]);
	}
	while (i <= mid) temp.push_back(arr[i++]);
	while (j <= right) temp.push_back(arr[j++]);
	for (int k = 0; k < temp.size(); k++) arr[left + k] = temp[k];
}
void mergeSort(std::vector<int>& arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	switch (key) {
	case 'r':
		numbers.clear();
		for (int i = 0; i < 5; i++) {
			numbers.push_back(ofRandom(10, 101));
		}
		break;
	case 'b':
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5 - i - 1; j++) {
				if (numbers[j] > numbers[j + 1]) {
					int t = numbers[j];
					numbers[j] = numbers[j + 1];
					numbers[j + 1] = t;
				}
			}
		}
		break;
	case 'i':
		for (size_t i = 1; i < numbers.size(); i++) {
			int key = numbers[i];
			int j = i - 1;
			while (j >= 0 && numbers[j] > key) {
				numbers[j + 1] = numbers[j];
				j--;
			}
			numbers[j + 1] = key;
		}
		break;
	case 'm':
		mergeSort(numbers, 0, numbers.size() - 1);
		break;
	}
}
//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
