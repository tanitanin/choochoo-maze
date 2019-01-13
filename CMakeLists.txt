cmake_minimum_required(VERSION 3.1)
project (choochoo-maze)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
add_test(NAME choochoo-maze-test COMMAND Test)

