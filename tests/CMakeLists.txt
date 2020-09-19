# Set the tests sources
file(GLOB MODULE_TEST_SRC ${TESTS_DIR}/module/*.cpp)


add_executable (${PROJECT_NAME}_Tests 
                    "allTests.cpp"
                    ${MODULE_TEST_SRC}
                )

target_include_directories  (${PROJECT_NAME}_Tests 
                                PRIVATE 
                                    ${CPPUTEST_INCLUDE_DIR}
                            )

target_link_libraries   (${PROJECT_NAME}_Tests 
                                ${CPPUTEST_LIB_DIR}
                        )
target_link_libraries   (${PROJECT_NAME}_Tests 
                                ${PROJECT_NAME}_Production
                        )