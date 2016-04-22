cmake_minimum_required(VERSION 2.8.3)
project(sr_public_library)

find_package(catkin REQUIRED)

###################################
## catkin specific configuration ##
###################################

catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES sr_public_library
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

###########
## Build ##
###########

include_directories(include)


if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/lib/libsr_private_library.so")
    configure_file(
            ${CMAKE_CURRENT_LIST_DIR}/lib/libsr_private_library.so
            ${CATKIN_GLOBAL_LIBEXEC_DESTINATION}/libsr_private_library.so
            COPYONLY)
else()
    message(WARNING "You should this message once in case if you are non-shared-library developer.")
endif()

#############
## Install ##
#############

## Mark executables and/or libraries for installation
# install(TARGETS sr_public_library sr_public_library_node
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

