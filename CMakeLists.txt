cmake_minimum_required(VERSION 3.28)
project(Projeto_PacMan C)

set(CMAKE_C_STANDARD 11)

add_executable(Projeto_PacMan main.c
        pacman.h
        mapa.c
        mapa.h
        ui.c
        ui.h)
