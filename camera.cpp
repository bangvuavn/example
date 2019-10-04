#include <stdio.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int, char**) {

    VideoCapture cap("rtsp://root:asilla2015@192.168.0.19/live.sdp"); // open the video camera using http protocol with the URL specified 
    while (!cap.isOpened())  // if not success, exit program
    {
        cout << "cap not open" << endl;
        continue;
        //return -1;
    }

    Mat frame;
    namedWindow("MyVideo", CV_WINDOW_AUTOSIZE); 
    while (1) {
        cap.read(frame);

        imshow("MyVideo", frame);
        if (waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
        {
            cout << "esc key is pressed by user" << endl;
            exit(0);
        }
    }
}
