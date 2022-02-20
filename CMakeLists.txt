cmake_minimum_required(VERSION 3.22.2)

project(text_fantasy)


# add_subdirectory(src)

#target_include_directories(${PROJECT_NAME} "${CMAKE_CURRENT_LIST_DIR}/include")
#set(HEADERS ./include/game.h)
include_directories(./include/)
file(GLOB SOURCES "src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})
