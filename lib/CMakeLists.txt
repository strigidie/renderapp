# Link SDL2 to the RenderApp
add_subdirectory(SDL)
add_subdirectory(SDL_image)
# Don't forget install into the system wavpack, fluidsynth, libopecesc
add_subdirectory(SDL_mixer)
add_subdirectory(SDL_ttf)

# Link GLM to the RenderApp
add_subdirectory(glm)

# Link GLEW to the RenderApp
# execute_process(
#     COMMAND make
#     WORKING_DIRECTORY glew
# )

# add_subdirectory(glew/build/cmake)

# Link OpenGL to the RenderApp
find_package(OpenGL)
