cmake_minimum_required(VERSION 2.8)

project(AlgoHomework)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(. DIR_SRCS)

add_executable(main ${DIR_SRCS})