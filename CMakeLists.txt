cmake_minimum_required(VERSION 3.0)

project(SOLIDERFIRE)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")#添加编译选项，调试，优化，警告信息

include_directories(${CMAKE_SOURCE_DIR}/include)#cmakelists路径下的include文件夹

add_executable(my_cmake_exe main.cpp src/Gun.cpp src/Solider.cpp)#目标 所有源文件
