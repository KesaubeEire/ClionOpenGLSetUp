# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/w/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.4588.63/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/w/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.4588.63/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/w/CLionProjects/OpenGL_awesome

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OpenGLSetup.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGLSetup.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGLSetup.dir/flags.make

CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.o: CMakeFiles/OpenGLSetup.dir/flags.make
CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.o: ../L_0_6_BeforeTransform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.o -c /Users/w/CLionProjects/OpenGL_awesome/L_0_6_BeforeTransform.cpp

CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/L_0_6_BeforeTransform.cpp > CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.i

CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/L_0_6_BeforeTransform.cpp -o CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.s

CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.o: CMakeFiles/OpenGLSetup.dir/flags.make
CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.o: ../GLAD/src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/GLAD/src/glad.c

CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/GLAD/src/glad.c > CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.i

CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/GLAD/src/glad.c -o CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.s

# Object files for target OpenGLSetup
OpenGLSetup_OBJECTS = \
"CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.o" \
"CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.o"

# External object files for target OpenGLSetup
OpenGLSetup_EXTERNAL_OBJECTS =

../build/OpenGLSetup: CMakeFiles/OpenGLSetup.dir/L_0_6_BeforeTransform.cpp.o
../build/OpenGLSetup: CMakeFiles/OpenGLSetup.dir/GLAD/src/glad.c.o
../build/OpenGLSetup: CMakeFiles/OpenGLSetup.dir/build.make
../build/OpenGLSetup: dependencies/GLFW/src/libglfw3.a
../build/OpenGLSetup: CMakeFiles/OpenGLSetup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../build/OpenGLSetup"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGLSetup.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGLSetup.dir/build: ../build/OpenGLSetup

.PHONY : CMakeFiles/OpenGLSetup.dir/build

CMakeFiles/OpenGLSetup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGLSetup.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGLSetup.dir/clean

CMakeFiles/OpenGLSetup.dir/depend:
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/w/CLionProjects/OpenGL_awesome /Users/w/CLionProjects/OpenGL_awesome /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles/OpenGLSetup.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGLSetup.dir/depend

