#include <opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include "opencv2/videoio.hpp"
#include "opencv2/tracking.hpp"

using namespace cv;
using namespace std;






////////////// Webcam /////////

int main() {
	
	VideoCapture cap(0);  //0 for default camera, 1 for then next webcam
	Mat img;

	while (true) {

	cap.read(img); //pass in the camera
	if (img.empty())
	{ //check to see if the camera is empty
		return 0;
	}
	imshow("Webcam", img);		//show the camera
	waitKey(1);
	

	}


}