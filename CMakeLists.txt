cmake_minimum_required(VERSION 3.21)
project(btree)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(./googletest-main)
set(LIBRARIES
        gtest
        pthread)

add_executable(b btree main.cpp BTnode.h Btree.h BTree.cpp)
target_link_libraries(b ${LIBRARIES})