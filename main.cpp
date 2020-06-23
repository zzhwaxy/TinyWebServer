#include "config.h"
#include "webserver.h"

int main(int argc, char *argv[])
{

    Config config;
    config.parse_file(argc,argv);
    WebServer server;
    server.init(config);
    //日志
    server.log_write();

    //数据库
    server.sql_pool();

    //线程池
    server.thread_pool();

    //触发模式
    server.trig_mode();

    //监听
    server.eventListen();

    //运行
    server.eventLoop();

    return 0;
}
