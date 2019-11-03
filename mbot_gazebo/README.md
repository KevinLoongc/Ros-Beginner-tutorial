# mbot_gazebo

mbot_gazebo软件包，在Gazebo搭建仿真环境和配置机器人模型。

## 功能介绍

配置在Gazebo仿真环境下的机器人模型，启动仿真环境，控制机器人在物理仿真环境中移动，打开rviz添加查看激光雷达传感器仿真。


## 运行方法

1）启动仿真环境

```sh
roslaunch mbot_gazebo view_mbot_gazebo_play_ground.launch 

```

2）启动键盘控制

```bash
roslaunch mbot_teleop mbot_teleop.launch
```

按下键盘方向键即可控制机器人在物理仿真环境中移动。

## 激光雷达传感器仿真

1）启动仿真环境

```
roslaunch mbot_gazebo view_mbot_with_laser_gazebo.launch
```

2）打开rviz添加查看激光雷达仿真

```
rosrun rviz rviz
```