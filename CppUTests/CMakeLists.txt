project(Hello)

cmake_minimum_required(VERSION 3.2)

#if (WIN32)
	#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR})
	#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
	#set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} /MTd")
#endif ()

include_directories(./cpputest/include/)
link_directories(./cpputest/lib/)

#add_definitions("-Wall -std = c++11")
add_executable(Hello hello.cpp
	             calculator.c
		     calculator.h
		     hello_test.cpp
)

target_link_libraries(Hello winmm CppUTest CppUTestExt)
