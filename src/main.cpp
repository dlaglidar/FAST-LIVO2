#include "LIVMapper.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "laserMapping");
  ROS_INFO("\033[1;32m[FAST-LIVO2] Node starting...\033[0m");
  ros::NodeHandle nh;
  image_transport::ImageTransport it(nh);
  ROS_INFO("[FAST-LIVO2] Initializing LIVMapper...");
  LIVMapper mapper(nh);
  ROS_INFO("[FAST-LIVO2] Initializing subscribers and publishers...");
  mapper.initializeSubscribersAndPublishers(nh, it);
  ROS_INFO("\033[1;32m[FAST-LIVO2] Initialization complete. Running...\033[0m");
  mapper.run();
  return 0;
}