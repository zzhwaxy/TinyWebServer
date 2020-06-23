#ifndef CONFIG_H
#define CONFIG_H

#include<fstream>
#include<string>
#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

class Config
{
public:
    Config();
    ~Config(){};

    void parse_arg(int argc, char*argv[]);
  void parse_file(int argc,char *argv[]);
  

    //端口号
    int PORT;

    //日志写入方式
    int LOGWrite;

    //触发组合模式
    int TRIGMode;

    //listenfd触发模式
    int LISTENTrigmode;

    //connfd触发模式
    int CONNTrigmode;

    //优雅关闭链接
    int OPT_LINGER;

    //数据库连接池数量
    int sql_num;

    //线程池内的线程数量
    int thread_num;

    //是否关闭日志
    int close_log;

    //并发模型选择
    int actor_model;

  //需要修改的数据库信息,登录名,密码,库名
  string user = "root";
  string passwd = "root";
  string databasename = "yourdb";
};

#endif
