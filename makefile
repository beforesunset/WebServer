CXX ?= g++
# 没有被赋值则赋值

DEBUG ?= 1
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g
else
    CXXFLAGS += -O2

endif

<<<<<<< HEAD
server:main.cpp ./http/http_conn.cpp ./CGImysql/sql_connection_pool.cpp webserver.cpp config.cpp 
=======
server:main.cpp
>>>>>>> 05838572aa32a57d363048c1654cbb4782beae55
	$(CXX) -o server $^ $(CXXFLAGS) -lpthread -lmysqlclient

clean:
	rm -rf server