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
CMAKE_COMMAND = "/Users/w/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.4886.39/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/w/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.4886.39/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/w/CLionProjects/OpenGL_awesome

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug

# Include any dependencies generated for this target.
include dependencies/GLFW/src/CMakeFiles/glfw.dir/depend.make

# Include the progress variables for this target.
include dependencies/GLFW/src/CMakeFiles/glfw.dir/progress.make

# Include the compile flags for this target's objects.
include dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make

dependencies/GLFW/src/CMakeFiles/glfw.dir/context.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/context.c.o: ../dependencies/GLFW/src/context.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/context.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/context.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/context.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/context.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/context.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/context.c > CMakeFiles/glfw.dir/context.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/context.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/context.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/context.c -o CMakeFiles/glfw.dir/context.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/init.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/init.c.o: ../dependencies/GLFW/src/init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/init.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/init.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/init.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/init.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/init.c > CMakeFiles/glfw.dir/init.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/init.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/init.c -o CMakeFiles/glfw.dir/init.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/input.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/input.c.o: ../dependencies/GLFW/src/input.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/input.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/input.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/input.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/input.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/input.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/input.c > CMakeFiles/glfw.dir/input.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/input.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/input.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/input.c -o CMakeFiles/glfw.dir/input.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/monitor.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/monitor.c.o: ../dependencies/GLFW/src/monitor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/monitor.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/monitor.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/monitor.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/monitor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/monitor.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/monitor.c > CMakeFiles/glfw.dir/monitor.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/monitor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/monitor.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/monitor.c -o CMakeFiles/glfw.dir/monitor.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/vulkan.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/vulkan.c.o: ../dependencies/GLFW/src/vulkan.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/vulkan.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/vulkan.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/vulkan.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/vulkan.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/vulkan.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/vulkan.c > CMakeFiles/glfw.dir/vulkan.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/vulkan.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/vulkan.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/vulkan.c -o CMakeFiles/glfw.dir/vulkan.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/window.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/window.c.o: ../dependencies/GLFW/src/window.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/window.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/window.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/window.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/window.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/window.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/window.c > CMakeFiles/glfw.dir/window.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/window.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/window.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/window.c -o CMakeFiles/glfw.dir/window.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_init.m.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_init.m.o: ../dependencies/GLFW/src/cocoa_init.m
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_init.m.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/cocoa_init.m.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_init.m

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_init.m.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/cocoa_init.m.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_init.m > CMakeFiles/glfw.dir/cocoa_init.m.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_init.m.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/cocoa_init.m.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_init.m -o CMakeFiles/glfw.dir/cocoa_init.m.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_joystick.m.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_joystick.m.o: ../dependencies/GLFW/src/cocoa_joystick.m
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_joystick.m.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/cocoa_joystick.m.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_joystick.m

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_joystick.m.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/cocoa_joystick.m.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_joystick.m > CMakeFiles/glfw.dir/cocoa_joystick.m.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_joystick.m.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/cocoa_joystick.m.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_joystick.m -o CMakeFiles/glfw.dir/cocoa_joystick.m.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_monitor.m.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_monitor.m.o: ../dependencies/GLFW/src/cocoa_monitor.m
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_monitor.m.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/cocoa_monitor.m.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_monitor.m

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_monitor.m.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/cocoa_monitor.m.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_monitor.m > CMakeFiles/glfw.dir/cocoa_monitor.m.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_monitor.m.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/cocoa_monitor.m.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_monitor.m -o CMakeFiles/glfw.dir/cocoa_monitor.m.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_window.m.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_window.m.o: ../dependencies/GLFW/src/cocoa_window.m
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_window.m.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/cocoa_window.m.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_window.m

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_window.m.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/cocoa_window.m.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_window.m > CMakeFiles/glfw.dir/cocoa_window.m.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_window.m.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/cocoa_window.m.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_window.m -o CMakeFiles/glfw.dir/cocoa_window.m.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_time.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_time.c.o: ../dependencies/GLFW/src/cocoa_time.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_time.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/cocoa_time.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_time.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_time.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/cocoa_time.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_time.c > CMakeFiles/glfw.dir/cocoa_time.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_time.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/cocoa_time.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/cocoa_time.c -o CMakeFiles/glfw.dir/cocoa_time.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/posix_thread.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/posix_thread.c.o: ../dependencies/GLFW/src/posix_thread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/posix_thread.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/posix_thread.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/posix_thread.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/posix_thread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/posix_thread.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/posix_thread.c > CMakeFiles/glfw.dir/posix_thread.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/posix_thread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/posix_thread.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/posix_thread.c -o CMakeFiles/glfw.dir/posix_thread.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/nsgl_context.m.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/nsgl_context.m.o: ../dependencies/GLFW/src/nsgl_context.m
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/nsgl_context.m.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/nsgl_context.m.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/nsgl_context.m

dependencies/GLFW/src/CMakeFiles/glfw.dir/nsgl_context.m.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/nsgl_context.m.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/nsgl_context.m > CMakeFiles/glfw.dir/nsgl_context.m.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/nsgl_context.m.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/nsgl_context.m.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/nsgl_context.m -o CMakeFiles/glfw.dir/nsgl_context.m.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/egl_context.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/egl_context.c.o: ../dependencies/GLFW/src/egl_context.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/egl_context.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/egl_context.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/egl_context.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/egl_context.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/egl_context.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/egl_context.c > CMakeFiles/glfw.dir/egl_context.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/egl_context.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/egl_context.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/egl_context.c -o CMakeFiles/glfw.dir/egl_context.c.s

dependencies/GLFW/src/CMakeFiles/glfw.dir/osmesa_context.c.o: dependencies/GLFW/src/CMakeFiles/glfw.dir/flags.make
dependencies/GLFW/src/CMakeFiles/glfw.dir/osmesa_context.c.o: ../dependencies/GLFW/src/osmesa_context.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object dependencies/GLFW/src/CMakeFiles/glfw.dir/osmesa_context.c.o"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glfw.dir/osmesa_context.c.o   -c /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/osmesa_context.c

dependencies/GLFW/src/CMakeFiles/glfw.dir/osmesa_context.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glfw.dir/osmesa_context.c.i"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/osmesa_context.c > CMakeFiles/glfw.dir/osmesa_context.c.i

dependencies/GLFW/src/CMakeFiles/glfw.dir/osmesa_context.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glfw.dir/osmesa_context.c.s"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src/osmesa_context.c -o CMakeFiles/glfw.dir/osmesa_context.c.s

# Object files for target glfw
glfw_OBJECTS = \
"CMakeFiles/glfw.dir/context.c.o" \
"CMakeFiles/glfw.dir/init.c.o" \
"CMakeFiles/glfw.dir/input.c.o" \
"CMakeFiles/glfw.dir/monitor.c.o" \
"CMakeFiles/glfw.dir/vulkan.c.o" \
"CMakeFiles/glfw.dir/window.c.o" \
"CMakeFiles/glfw.dir/cocoa_init.m.o" \
"CMakeFiles/glfw.dir/cocoa_joystick.m.o" \
"CMakeFiles/glfw.dir/cocoa_monitor.m.o" \
"CMakeFiles/glfw.dir/cocoa_window.m.o" \
"CMakeFiles/glfw.dir/cocoa_time.c.o" \
"CMakeFiles/glfw.dir/posix_thread.c.o" \
"CMakeFiles/glfw.dir/nsgl_context.m.o" \
"CMakeFiles/glfw.dir/egl_context.c.o" \
"CMakeFiles/glfw.dir/osmesa_context.c.o"

# External object files for target glfw
glfw_EXTERNAL_OBJECTS =

dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/context.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/init.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/input.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/monitor.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/vulkan.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/window.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_init.m.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_joystick.m.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_monitor.m.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_window.m.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/cocoa_time.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/posix_thread.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/nsgl_context.m.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/egl_context.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/osmesa_context.c.o
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/build.make
dependencies/GLFW/src/libglfw3.a: dependencies/GLFW/src/CMakeFiles/glfw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking C static library libglfw3.a"
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && $(CMAKE_COMMAND) -P CMakeFiles/glfw.dir/cmake_clean_target.cmake
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glfw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dependencies/GLFW/src/CMakeFiles/glfw.dir/build: dependencies/GLFW/src/libglfw3.a

.PHONY : dependencies/GLFW/src/CMakeFiles/glfw.dir/build

dependencies/GLFW/src/CMakeFiles/glfw.dir/clean:
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src && $(CMAKE_COMMAND) -P CMakeFiles/glfw.dir/cmake_clean.cmake
.PHONY : dependencies/GLFW/src/CMakeFiles/glfw.dir/clean

dependencies/GLFW/src/CMakeFiles/glfw.dir/depend:
	cd /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/w/CLionProjects/OpenGL_awesome /Users/w/CLionProjects/OpenGL_awesome/dependencies/GLFW/src /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src /Users/w/CLionProjects/OpenGL_awesome/cmake-build-debug/dependencies/GLFW/src/CMakeFiles/glfw.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dependencies/GLFW/src/CMakeFiles/glfw.dir/depend

