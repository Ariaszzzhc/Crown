#ifndef CROWN_SERVER_H
#define CROWN_SERVER_H

#include <sys/socket.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>

struct Server {
    int sock;
    struct sockaddr_in* addr;
};

struct Server* NewServer() {
    struct Server* server;

    server->sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    memset(server->addr, 0, sizeof(*(server->addr)));
    server->addr->sin_family = AF_INET;
    server->addr->sin_addr.s_addr = inet_addr("127.0.0.1");
    
    bind(server->sock, (struct sockaddr*)(server->addr), sizeof(*(server->addr)));
    return server;
}


#endif