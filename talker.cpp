#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv)
{
    // initialize ros
    ros::init(argc, argv, "talker");
    ros::NodeHandle n;

    // tell master we're publishing messages to a topic "chatter"
    // our publisher will buffer at most 1000 messages.
    int buffer_length = 1000;
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", buffer_length);

    // our loop will publish at 10Hz
    ros::Rate loop_rate(10);

    int count = 0;

    // if ros is still alive (and not SIGINT Ctrl-C interrupted or shutdown)
    while (ros::ok())
    {
        std_msgs::String msg;
        msg.data = "hello world";

        // this is how you "printf" to the ROS console
        ROS_INFO("%s", msg.data.c_str());

        // publish the message
        chatter_pub.publish(msg);

        // check ros for callbacks
        // this is technically not necessary since we don't have any callbacks,
        // but if we add a subscription in our app we'd need it.
        ros::spinOnce();

        // sleep for remaining time to achieve 10Hz
        loop_rate.sleep();

        ++count;
    }
    return 0;
}
