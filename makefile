CXX ?= g++
# 没有被赋值则赋值

DEBUG ?= 1
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g
else
    CXXFLAGS += -O2

endif

server:main.cpp ./http/http_conn.cpp ./CGImysql/sql_connection_pool.cpp webserver.cpp config.cpp 
	$(CXX) -o server $^ $(CXXFLAGS) -lpthread -lmysqlclient

clean:
	rm -rf server