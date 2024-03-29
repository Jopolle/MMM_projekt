# CMakeList.txt : CMake project for MMM_projekt_matplot_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.21)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(Matplot++_DIR "C:\\Program Files (x86)\\Matplot++\\lib\\cmake\\Matplot++")
find_package(Matplot++ REQUIRED)
project ("MMM_projekt_matplot_test")

# Add source to this project's executable.
add_executable (MMM_projekt_matplot_test "MMM_projekt_matplot_test.cpp" "MMM_projekt_matplot_test.h")
target_link_libraries(MMM_projekt_matplot_test PUBLIC Matplot++::matplot)
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MMM_projekt_matplot_test PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
