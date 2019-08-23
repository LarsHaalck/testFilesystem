project(cvutils)
cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake/Modules)

find_package(Filesystem REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE std::filesystem)
