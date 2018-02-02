#ifndef CROWN_H
#define CROWN_H

#include "crown/server.h"

namespace crown {
    class Crown {
    public:
        Crown() {
            this->server = NewServer();
        }
        int run();

    private:
        Server* server;
    };
};

#endif