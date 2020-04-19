
file(GLOB SOURCES *.cpp)

add_executable(tris ${SOURCES})

target_include_directories(tris PRIVATE src)