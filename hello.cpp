#include <iostream>
#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    int increment(int x) {
        return x + 1;
    }
}

int main() {
    EM_ASM({
        document.getElementById('log').textContent = 'Hello World!';
    });
    return 0;
}

