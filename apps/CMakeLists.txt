add_executable(muportal portal.cpp)
add_dependencies(muportal muportalcore)
target_include_directories(muportal PUBLIC ../include)
target_link_libraries(muportal muportalcore Threads::Threads OpenSSL::SSL)
