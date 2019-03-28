cmake_minimum_required(VERSION 2.8.3) # CMAKE版本
project(topic_demo) # 项目名称

# 指定依赖
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)

#添加自定义的msg
add_message_files(
  FILES
  gps.msg
)

# 生成msg对应的头文件
generate_messages(DEPENDENCIES std_msgs)

# 用于配置ROS和packge配置文件和Cmake文件
catkin_package(
  CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
)

# 指定C/C++的头文件路径
include_directories(
  include ${catkin_INCLUDE_DIRS}
)


# 生成可执行目标文件
add_executable(talker
  src/talker.cpp
)
# 添加依赖
add_dependencies(talker ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
# 链接
target_link_libraries(talker
  ${catkin_LIBRARIES}
)

add_executable(listener
  src/listener.cpp
)
add_dependencies(listener ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(listener
  ${catkin_LIBRARIES}
)