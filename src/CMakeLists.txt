project(data)

find_package(cdt)

add_contract( data data data.cpp )
target_include_directories( data PUBLIC ${CMAKE_SOURCE_DIR}/../include ${CMAKE_SOURCE_DIR}/../library )
target_ricardian_directory( data ${CMAKE_SOURCE_DIR}/../ricardian )
