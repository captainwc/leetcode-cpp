add_subdirectory(hash)
add_subdirectory(linerlist)
add_subdirectory(str)
add_subdirectory(search)
add_subdirectory(datastructure)

option(BUILD_LEETCODE "build raw leetcode solutions" ON)
if(BUILD_LEETCODE)
    add_subdirectory(solutions)
endif()
