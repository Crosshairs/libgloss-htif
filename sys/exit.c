#include "syscall.h"
#include "htif.h"

void __attribute__ ((noreturn)) _exit(int code)
{
    uint64_t cmd;
    cmd = (code << 1) | 0x1;

    for (;;) {
        fromhost = 0;
        tohost = cmd;
    }
}
