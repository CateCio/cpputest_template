file(GLOB MODULE_SRC ${SRC_DIR}/module/*.c)
set (MODULE_INC_DIR ${INC_DIR}/module)

add_library (${PROJECT_NAME}_Production STATIC 
                    ${MODULE_SRC}
            )

target_include_directories  (${PROJECT_NAME}_Production 
                                PUBLIC 
                                    ${MODULE_INC_DIR}
                                    ${CPPUTEST_INCLUDE_DIR}
                            )