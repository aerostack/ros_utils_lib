#pragma once

#include "ros/ros.h"
#include <string>
#include <iostream>

namespace ros_utils_lib{

template<typename T>
bool getPrivateParam(const std::string& param_name,T& param_storage,const T& default_value){
	if (ros::param::get(param_name, param_storage)){
		return true;
	}
	else{
		param_storage = default_value;
		return false;
	}
}

std::string getNodeName(const std::string& default_name);

}
