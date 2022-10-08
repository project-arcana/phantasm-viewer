cmake_minimum_required(VERSION 3.11)

file(GLOB_RECURSE SOURCES
    "*.cc"
    "*.hh"
)

add_arcana_test(tests-phantasm-viewer "${SOURCES}")

target_link_libraries(tests-phantasm-viewer PUBLIC
    clean-core
    clean-ranges
    typed-geometry
    rich-log
    ctracer
    phantasm-viewer
    glow
    imgui
    glow-extras
)
