# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\graphfunctions_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\graphfunctions_autogen.dir\\ParseCache.txt"
  "graphfunctions_autogen"
  )
endif()
