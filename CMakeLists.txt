cmake_minimum_required(VERSION 3.10)  # Specify the CMake version
project(MyProject)                    # Define the project name

set(CMAKE_CXX_STANDARD 11)            # Use C++11 standard

# Add the include directory
include_directories(/include)

# Add executable target
add_executable(calculator src/main.cpp)
