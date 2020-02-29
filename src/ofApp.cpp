#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    audio_path = "audio/";
    
    dir.open(audio_path);
    dir.listDir();
    
    for(int i=0; i<dir.size(); i++){
        cout << dir.getPath(i) << endl;
    }
    
   
    
   
    
    
    for(int s=0; s<6; s++){
        float random_sound = ofRandom(0, dir.size());
        players[s].load(dir.getPath(random_sound));
        players[s].setVolume(1.0);
        players[s].setPosition(ofRandom(0.0, 1.0));
        players[s].setLoop(true);
        players[s].play();
        
    }
    
    
    ofSetFrameRate(60);
     delayStart(60 * 4);
    
}

//--------------------------------------------------------------
void ofApp::changeAudio(){
    
    // count to change position one at a time
    
    // count to change out audio files periodically
    // %25 count up to change files one at a time
    
    //cout << ofRandom(0.0, 1.0) << endl;
     for(int s=0; s<6; s++){
         players[s].setPosition(ofRandom(0.0, 1.0));
     }
}

//--------------------------------------------------------------
void ofApp::delayStart(float s){
    count = 0;
    delay_time = s;
}

//--------------------------------------------------------------
void ofApp::delayTimer(){
    count++;
    if(count > delay_time){
        delayFire();
        count = 0;
    }
}

//--------------------------------------------------------------
void ofApp::delayFire(){
    cout << "////////////////////////////////////////////////" << endl;
    
    // FUNCTION
    changeAudio();
    
    //cout << "////////////////////////////////////////////////" << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    delayTimer();
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
