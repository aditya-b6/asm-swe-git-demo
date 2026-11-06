cmake_minimum_required(VERSION 3.15)

# Name of your project
project(AsmGitDemo)

# Tell CMake where to look for your header files
include_directories(include)

# Find all .cpp files inside the src folder automatically
file(GLOB SOURCES "src/*.cpp")

# Create an executable named 'app.exe' using those source files
add_executable(app ${SOURCES})