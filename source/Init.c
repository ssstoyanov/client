#include <winsock2.h>
#include <stdio.h>
#include "Services/TimeService.h"
#include "Services/RunService.h"


int main() {
    WSADATA wsd;
    if (WSAStartup(MAKEWORD(1, 1), &wsd) != 0) {
        printf("[%s] Can't connect to socket lib\n", getCurrentTime());
        return 1;
    }
    run();

    return 0;
}

