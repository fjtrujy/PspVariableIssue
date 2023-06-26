cmake_minimum_required(VERSION 3.0)

project(hello)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS_INIT} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_INIT} -std=c++20")

add_executable(${PROJECT_NAME}
  main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  -ldebug
)

