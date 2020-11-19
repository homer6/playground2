cmake_minimum_required( VERSION "2.6.4" )

project( playground CXX C )


include_directories(
    src
    include
)

set( SOURCES
    src/Point.cc
)


set( LIBS
    pthread
    dl
    z
)

set( COMPILE_OPTIONS
    -Wall
    -Wextra
    -O3
    -std=c++17
    -g
)

add_executable( build/playground ${SOURCES} src/main.cc )

target_link_libraries( build/playground -Wl,-rpath=/usr/local/lib/playground:. ${LIBS} )

set_target_properties( build/playground
    PROPERTIES
    COMPILE_OPTIONS  "${COMPILE_OPTIONS}"
)

