#ifndef _CONNECTION_POOL_
#define _CONNECTION_POOL_

#include <mysql/mysql.h>
#include <iostream>
class connection_pool
{
public:
    MYSQL *GetConnection();
    bool ReleaseConnection(MYSQL *conn);
    int GetFreeConn();
    void DestroyPool();

    //单例模式
    static connection_pool *GetInstance();

    void init(std::string url, std::string User, std::string PassWord, std::string DataBaseName, int Port, int MaxConn, int close_log);

private:
    connection_pool();
    ~connection_pool();

    int m_MaxConn;
    int m_CurConn;
    int m_FreeConn;
    

};

#endif