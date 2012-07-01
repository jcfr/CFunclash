cmake_minimum_required(VERSION 2.8.7)

project(CFunclash)

add_library(thelib thelib.c)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} thelib)

