#include "crown.h"

int main() {

    crown::Crown<8080> app;

    app.route("/", [](Contex ctx) {
        return "Hello, World!";
    });

    return app.run();
}