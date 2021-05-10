
#pragma once 

#include "ros/ros.h"
#include <string>
#include <iostream>

namespace ros_utils_lib{

class MovingAverageFilter{
	private:
		const float alpha_;
	public:
		MovingAverageFilter(float alpha)
		:alpha_(alpha){};

		double filterValue (double _value){
			static double prev_value_ = _value;
			prev_value_ = alpha_ * prev_value_ + (1.0f-alpha_)*_value;
			return prev_value_;
		};
};

}