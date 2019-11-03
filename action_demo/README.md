# action_demo

action通信示例，用C++实现action通信。

- 一种问答通信机制；
- 带有连续反馈；
- 可以在任务过程中止运行；
- 给予ROS的消息机制实现

## 功能介绍

1）客户端发送了一个目标给服务端，服务端每一秒会反馈回来进度信息；

2）客户端接受到反馈信息后，会进入到回调函数里面打印信息；

3）当所有动作任务完成之后，会打印完成的信息。

本例需要自定义action文件，见[action/DoDishes.action](./action/DoDishes.action)。

代码见`src/`下的[DoDishes_client.cpp](./src/DoDishes_client.cpp)和[DoDishes_server.cpp](./src/DoDishes_server.cpp)。



## 运行方法

1）启动客户端

```bash
rosrun action_demo DoDishes_client
```

2）启动服务器端

```bash
rosrun action_demo DoDishes_server
```