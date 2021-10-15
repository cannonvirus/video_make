#include <iostream>
#include <fstream>
#include <map>
#include <random>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include <stdlib.h>
#include <random>
#include <string>
#include <regex>
#include <sstream>

using namespace std;

int main() {
	string video_path = "./track1.avi";
    string img_folder_path = "/data/JSH_Tracking_dataset_Pig/1/";
	cv::VideoWriter video(video_path, cv::VideoWriter::fourcc('X','2','6','4'), 15, cv::Size(1920,1080));
	
	for (int i = 0; i < 600; i++) {
		string img_path = img_folder_path + to_string(i) + ".jpg";
		cout << i << " : " << img_path << endl;
		cv::Mat img = cv::imread(img_path);
		video.write(img);
	}
	
	video.release();
}