#include "sql_connection_pool.h"
#include <iostream>
<<<<<<< HEAD


connection_pool::connection_pool()
{
	m_CurConn = 0;
	m_FreeConn = 0;
}

connection_pool* connection_pool::GetInstance()
{
    static connection_pool connPool;
    return &connPool;
}

//构造初始化
void connection_pool::init(std::string url, std::string User, std::string PassWord, std::string DBName, int Port, int close_log, int MaxConn)
{
    m_url = url;
    m_Port = Port;
    m_User = User;
    m_PassWord = PassWord;
    m_DatabaseName = DBName;
    m_close_log = close_log;
    
}
=======
#include "../lock/locker.h"
>>>>>>> f03329ed308f7846fc74dc287282635fc3ca76b9

