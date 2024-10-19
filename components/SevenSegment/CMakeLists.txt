#set(EXTRA_COMPONENT_DIRS${EXTRA_COMPONENT_DIRS}"component_LED")

idf_component_register(SRCS "SevenSegment.cpp"

                    INCLUDE_DIRS "include"

                    REQUIRES LED)

 
