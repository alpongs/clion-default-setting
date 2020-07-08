cmake_minimum_required(VERSION 3.16)
project(iglooCpp)

set(CMAKE_CXX_STANDARD 20)

set(Boost_INCLUDE_DIR /usr/local/Cellar/boost/1.72.0_3)
set(Boost_LIBRARY_DIR /usr/local/Cellar/boost/1.72.0_3/lib)

find_package(Boost REQUIRED regex date_time system filesystem thread graph)
include_directories(${BOOST_INCLUDE_DIRS})
message("boost lib: ${Boost_LIBRARIES}")
message("boost inc:${Boost_INCLUDE_DIR}")

#TARGET_LINK_LIBRARIES( LINK_PUBLIC ${Boost_LIBRARIES} )
add_executable(iglooCpp main.cpp base.h)
target_link_libraries( iglooCpp ${Boost_LIBRARIES} )