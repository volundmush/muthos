
add_library(mulib mulib/config.cpp ../include/mulib/config.h)
target_include_directories(mulib PUBLIC ../include)


add_library(muportalcore muportal/net.cpp ../include/muportal/net.h)
target_include_directories(muportalcore PUBLIC ../include)
target_link_libraries(muportalcore Threads::Threads OpenSSL::SSL)
