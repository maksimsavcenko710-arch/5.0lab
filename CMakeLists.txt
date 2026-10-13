cmake_minimum_required(VERSION 3.14)
project(Lab5_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab5_1 5.1.cpp
        test2.cpp
)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tests test.cpp)
target_link_libraries(tests GTest::gtest_main)
add_executable(tests2 test2.cpp)
target_link_libraries(tests2 GTest::gtest_main)
add_executable(tests3 test3.cpp)
target_link_libraries(tests3 GTest::gtest_main)