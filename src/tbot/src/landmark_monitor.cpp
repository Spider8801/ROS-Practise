#include "ros/ros.h"

int main(int argc, char** argv) {
	ros::init(argc, argv, "landmark_monitor");
	ros::NodeHandle nh;
	ros::spin();
	return 0;
}
