#include <iostream>

// #include "glew.h"

#include "SDL.h"
#include "SDL_opengl.h"

// #include "imgui.h"
// #include "imgui_impl_sdl2.h"
// #include "imgui_impl_opengl3.h"

#include "glm.hpp"

// -----------------------------------------------------------------------------
// Entry Point
// -----------------------------------------------------------------------------
int main(
    const int argc,
    const char* const* argv,
    const char* const* envp)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow(
        "RenderApp",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL
    );

    return EXIT_SUCCESS;
}