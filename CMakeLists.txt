cmake_minimum_required(VERSION 3.8)
project(PhantasmViewer)

if (NOT TARGET clean-core)
    message(FATAL_ERROR "[phantasm-viewer] clean-core must be available")
endif()

# =========================================
# define library

file(GLOB_RECURSE SOURCES "src/*.cc")
file(GLOB_RECURSE HEADERS "src/*.hh")

arcana_add_library(PV phantasm-viewer SOURCES HEADERS)

target_include_directories(phantasm-viewer PUBLIC src/)

target_link_libraries(phantasm-viewer PUBLIC
    clean-core
    typed-geometry
    rich-log
    reflector
)
