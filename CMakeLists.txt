cmake_minimum_required(VERSION 3.13)
project(OpenGLSetup)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES GLAD/src/glad.c)
set(HEADER_FILES dependencies/Camera.h dependencies/shader.h dependencies/filesystem.h)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/build)

include_directories(include)


#Include library files
include_directories(GLAD/include)
include_directories(glm/include)
file(COPY resources DESTINATION ${dir}/build)
file(COPY shaders DESTINATION ${dir}/build)


#Add deps
add_subdirectory(dependencies)


#Add Exe
add_executable(L_0_6 L_0_6_BeforeTransform.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_0_6 glfw)

add_executable(L_0_1-6 L_0_1-6_BeforeTransform.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_0_1-6 glfw)

add_executable(L_0_7 L_0_7_Transform.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_0_7 glfw)

add_executable(L_0_8 L_0_8_Axis.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_0_8 glfw)

add_executable(L_0_9 L_0_9_Camera.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_0_9 glfw)

add_executable(L_1_0 L_1_0_ColorInit.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_1_0 glfw)

add_executable(L_1_1 L_1_1_BaseLighting.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_1_1 glfw)

add_executable(L_1_2_Materials L_1_2_Materials.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_1_2_Materials glfw)

add_executable(L_1_3_LightingMaps L_1_3_LightingMaps.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_1_3_LightingMaps glfw)

add_executable(L_1_4_LightCasters L_1_4_LightCasters.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(L_1_4_LightCasters glfw)

add_executable(1_5_MultipleLights L_1_4_LightCasters.cpp ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(1_5_MultipleLights glfw)