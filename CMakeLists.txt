cmake_minimum_required(VERSION 3.16)
project(MyProject)

# Setting up the RenderApp framework
add_subdirectory(asset)
add_subdirectory(docs)
add_subdirectory(include)
add_subdirectory(lib)
add_subdirectory(shader)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(tools)

# Setup the project
add_executable(MyProject src/main.cpp)