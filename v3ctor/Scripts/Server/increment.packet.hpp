#include <v3ctor/server.hpp>

struct packetReturn {
    char* name;
    int ratelimit;
};

struct packetReturn incrementPacket() {
    packetReturn res = {};
    res.name = "increment";
    res.ratelimit = 100;
}

// server->registerPacket(incrementPacket)