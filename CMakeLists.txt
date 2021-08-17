cmake_minimum_required (VERSION 3.12)

project ("Twini-Golf")

set (SOURCES
	src/ball.cpp
	src/entity.cpp
	src/hole.cpp
	src/main.cpp
	src/renderwindow.cpp
	src/tile.cpp
)

add_executable (Twini-Golf ${SOURCES})
# add_executable (Minesweeper+ WIN32 ${SOURCES})

target_include_directories (Twini-Golf PUBLIC
	C:/dev/Libraries/SDL2-2.0.16/include
  include
)

target_link_directories (Twini-Golf PUBLIC
	C:/dev/Libraries/SDL2-2.0.16/lib/x64
)

target_link_libraries(Twini-Golf SDL2main SDL2 SDL2_image SDL2_ttf SDL2_mixer)