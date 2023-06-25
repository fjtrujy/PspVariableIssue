cmake_minimum_required(VERSION 3.0)
SET(MODE "mode" CACHE STRING "Some user-specified option")

set(APP_NAME "Psp Variable Issue")

project(hello)

# Add any additional include paths here
include_directories(
    include/
)

# Spécifiez le répertoire contenant vos fichiers source
set(SOURCES_DIR "Source")

# Recherchez tous les fichiers .cpp dans le répertoire et ses sous-répertoires
file(GLOB_RECURSE SOURCES "${SOURCES_DIR}/*.cpp" "${SOURCES_DIR}/*.c")

# Ajoutez les fichiers source à l'exécutable
add_executable(${PROJECT_NAME} ${SOURCES})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

target_link_libraries(${PROJECT_NAME} PRIVATE
    png
    jpeg
    pspgu
    pspgum
    pspctrl
    pspdebug
    pspvram
    psppower
    pspdisplay
    pspaudiolib
    pspaudio
    m
    pspge
    stdc++
    freetype
    bz2
    z
)

# Create an EBOOT.PBP file
create_pbp_file(
    TARGET ${PROJECT_NAME}
    ICON_PATH NULL
    BACKGROUND_PATH NULL
    PREVIEW_PATH NULL
    TITLE ${APP_NAME}
)

