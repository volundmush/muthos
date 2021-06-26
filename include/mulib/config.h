//
// Created by volund on 6/26/21.
//

#ifndef MUTHOS_CONFIG_H
#define MUTHOS_CONFIG_H

#include <cstdint>
#include <boost/json.hpp>
#include <boost/filesystem.hpp>
#include <boost/asio/ssl.hpp>

class GameConfig {
public:
    GameConfig();
    GameConfig(boost::filesystem::path path);
    GameConfig(boost::json::value jv);

    uin16_t listen_port = 7999;
    std::u8string listen_host = u8"0.0.0.0";
    std::u8string tls_pem_path = u8"cert.pem";
    boost::asio::ssl::context tls_context;

};

#endif //MUTHOS_CONFIG_H
