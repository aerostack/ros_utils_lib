cmake_minimum_required(VERSION 2.8.3)
set(PROJECT_NAME ros_utils_lib)
project(${PROJECT_NAME})
add_definitions(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS roscpp 
  )

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)


set(CPP_PROJECT_FILES 
  src/ros_utils.cpp
  src/control_utils.cpp
)

set(HEADER_PROJECT_FILES
  include/${PROJECT_NAME}/ros_utils.hpp
  include/${PROJECT_NAME}/control_utils.hpp
)

add_library(${PROJECT_NAME}
  ${CPP_PROJECT_FILES}
  ${HEADER_PROJECT_FILES}
)
add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
