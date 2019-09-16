cmake_minimum_required (VERSION 2.8)
project(ogreapp1)

## [discover_ogre]
# specify which version and components you need
find_package(OGRE 1.11 REQUIRED COMPONENTS Bites RTShaderSystem)

# copy resource.cfg next to our binaries where OGRE looks for it
file(COPY ${OGRE_CONFIG_DIR}/resources.cfg DESTINATION ${CMAKE_BINARY_DIR})
## [discover_ogre]

# Let us print some Ogre cmake variables to detect its installation status
message("###################################################################################")
message("Some Ogre Installation Information:")
message("The directory where the OGRE config files are located : " ${OGRE_CONFIG_DIR})
message("The directory where the OGRE sample media is located : " ${OGRE_MEDIA_DIR})
message("The directory where the OGRE config plugins are located : " ${OGRE_PLUGIN_DIR})
message("Whether ogre was build as static lib : " ${OGRE_STATIC})
message("###################################################################################")

# Let us build the actual executables
add_executable(basics_building_a_graph basics_building_a_graph.cpp)
target_link_libraries(basics_building_a_graph ${OGRE_LIBRARIES})

add_executable(tutorialApplication TutorialApplication.cpp)
target_link_libraries(tutorialApplication ${OGRE_LIBRARIES})
