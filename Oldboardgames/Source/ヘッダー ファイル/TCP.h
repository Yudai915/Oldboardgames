#pragma once

#define _WINSOCK_DEPRECATED_NO_WARNINGS 
#include <WinSock2.h>
#include <Task.h>
#include <string>
#include <mutex>
#include <thread>

class TCP : public Task
{
public:
	TCP();
	virtual ~TCP();
	void Initialize(); 
	void Finalize();  
	void Update();   
	void Draw();   

	int client_init();
	int client_connect(const char* ip);
	void client_close();
	std::string client_receive();

private:
	WSADATA wsaData;

	// client変数
	sockaddr_in server;
	SOCKET server_sock;
	char buf[32];
	// 0 未接続
	// 1 接続中
	int serverconnect_status;
	std::mutex mtx;

	std::string str_receive;
};

