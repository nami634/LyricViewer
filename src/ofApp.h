#pragma once

#include "ofMain.h"
#include "ofxPubSubOsc.h"

#include "TextMesh.h"
#include "KakkuriText.h"


using namespace glm;

class ofApp : public ofBaseApp{

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofTrueTypeFont font;
    ofEasyCam cam;
    ofLight light;
    string main_text;
    TextMesh* text_mesh;
    KakkuriText* kakkuri_mesh;
    bool scene;
    float roughness = 20;
};
