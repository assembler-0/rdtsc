#pragma once

#include <stdint.h>

#define RDTSC_VERSION "0.0.1"
#define RDTSC_BUILD __DATE__ " " __TIME__

extern uint64_t rdtsc();
extern uint64_t rdtscp();
