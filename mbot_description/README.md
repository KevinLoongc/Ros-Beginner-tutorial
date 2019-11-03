# mbot_descriptiontopic

mbot_description软件包，机器人建模功能包。

## 功能介绍

机器人相关的模型文件或者是一些外观描述文件。

| 文件夹 |              描述               |
| :----: | :-----------------------------: |
|  urdf  | 存放机器人模型的URDF或xacro文件 |
| meshes |  放置URDF中引用的模型渲染文件   |
| launch |        保存相关启动文件         |
| config |        保存rivz配置文件         |


## 运行方法

运行launch文件，即可看到你的机器人模型

```sh
roslaunch mbot_description display_mbot_with_laser_urdf.launch
```

