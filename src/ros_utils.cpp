#include "ros_utils_lib/ros_utils.hpp"

namespace ros_utils_lib{

std::string getNodeName(const std::string& default_name){

	std::string name  = ros::this_node::getName();
	if (name == std::string("empty")){        
		return default_name;
	}
	else{
		return name;
	}
}
}