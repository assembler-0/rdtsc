cmake_minimum_required(VERSION 3.30)
project(rdtscp
	VERSION 0.0.1
	DESCRIPTION "Simply read TSC"
	LANGUAGES C
	HOMEPAGE_URL "https://github.com/assembler-0/rdtsc"
)

set(EXEC_SOURCES
	src/main.c
)

set(LIB_SOURCES
	lib/rdtsc.c
	lib/rdtscp.c
)

add_library(tsc ${LIB_SOURCES})

add_executable(rdtsc ${EXEC_SOURCES})
target_include_directories(rdtsc PRIVATE
	.
	include
)
target_link_libraries(rdtsc tsc)
