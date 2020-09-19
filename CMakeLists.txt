cmake_minimum_required(VERSION 3.12)

project(CPPUTEST_TEMPLATE)

# Set paths to the CppUTest library
set(CPPUTEST_DIR "${PROJECT_SOURCE_DIR}/cpputest")
set(CPPUTEST_INCLUDE_DIR "${CPPUTEST_DIR}/include/CppUTest")
set(CPPUTEST_LIB_DIR "${CPPUTEST_DIR}/lib/libCppUTest.a")

# Set paths to the Project tests
set(TESTS_DIR "${PROJECT_SOURCE_DIR}/tests")

# Set paths to the Project sources
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

# Set paths to the Project include directory
set(INC_DIR "${PROJECT_SOURCE_DIR}/include")


add_subdirectory(src)
add_subdirectory(tests)
