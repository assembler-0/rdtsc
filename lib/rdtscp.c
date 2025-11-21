#include <stdint.h>

uint64_t __attribute__((hot, flatten)) rdtscp(void) {
    uint32_t lo, hi;
    __asm__ volatile ("rdtscp" : "=a"(lo), "=d"(hi) :: "rcx");
    return ((uint64_t)hi << 32) | lo;
}
