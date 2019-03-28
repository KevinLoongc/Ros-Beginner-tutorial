#include <ros/ros.h>			
#include <topic_demo/gps.h>		//自定义msg产生的头文件

int	main(int argc, char	**argv)
{
    ros::init(argc,	argv,"talker");		//用于解析ROS参数,第三个参数为本节点名
    ros::NodeHandle	n;				//实例化句柄,初始化node
    topic_demo::gps msg;		//自定义gps消息并初始化	
    msg.x = 1.0;
    msg.y = 1.0;
    msg.state = "working";
    ros::Publisher pub = n.advertise<topic_demo::gps>("gps_info",1);	//创建publisher,往"gps_info"话题上发布消息
    ros::Rate loop_rate(1.0);			//定义发布的频率,1HZ	
    while(ros::ok())			//循环发布msg
    {
        msg.x = 1.03 * msg.x;
        msg.y = 1.01 * msg.y;
        ROS_INFO("Talker: GPS: x = %f, y = %f",msg.x,msg.y);
        pub.publish(msg);   //发布m消息
        loop_rate.sleep();  //根据前面的定义的loop_rate,设置1s的暂停
    }
    return	0;
}