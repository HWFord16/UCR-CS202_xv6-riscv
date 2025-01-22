#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    printf("Total number of info system calls made by current process: %d\n", info(2));
    printf("Total number of processes: %d\n", info(1));
    printf("Total number of info system calls made by current process: %d\n", info(2));
    printf("Total number of memory pages used by current process: %d\n", info(3));
    printf("Total number of info system calls made by current process: %d\n", info(2));
    printf("Address of the kernel stack: 0x%x\n", info(4));
    exit(0);
}
