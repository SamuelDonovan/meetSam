/// @file meetSam.cpp
/// @brief A resume/website thing.

#include <print>

/// @brief Provides my full name.
/// 
/// @return My full name
std::string name() {
    return "Samuel Mehalko";
}


/// @brief Provides my title at the company that I am employeed.
/// 
/// @return My title
std::string title() {
    return "Senior Principle Embedded Software Engineer";
}


/// @brief Provides the name of the company that I am employeed.
/// 
/// @return My company
std::string company() {
    return "Northrop Grumman Corporation";
}


/// @brief Provides my office email address.
/// 
/// @return My email address
std::string email() {
    return "samuel.mehalko@ngc.com";
}


/// @brief Provides the url of readthedocs website for this repo.
/// 
/// @return The readthedocs url
std::string site() {
    return "https://meetsam.readthedocs.io";
}


/// @brief Provides the url of the this package's source github url.
/// 
/// @return This source code's github url.
std::string source() {
    return "https://github.com/SamuelDonovan/meetSam";
}


/// @brief Provides the pip installation command for meetSam. 
/// 
/// @return The pip installation command for meetSam. 
std::string installation() {
    return "pip install meetSam";
}


/// @brief Provides a QR code for the website URL.
/// 
/// @return The QR code. 
std::string qr_code() {
    return R"(
    █▀▀▀▀▀█ █▄█ ▄▀█   █▀▀▀▀▀█
    █ ███ █  █ █▀█▄ █ █ ███ █
    █ ▀▀▀ █ █▄█  ▀▀   █ ▀▀▀ █
    ▀▀▀▀▀▀▀ █ █▄█ █▄█ ▀▀▀▀▀▀▀
    ███  █▀▄▀█▀▄▀  ▄▀▀██▀▄ ██
     █    ▀▄█▄ █ ▀ ▀▄▄▀▄██▀ ▀
    ▀▀  ▀█▀▄ ▀ █▄ ▄▄█ ██   ▄█
    ▀▀ ▄▄ ▀▄▀  █ ▀ ▀ ▄▀▄▄█▀ ▀
    ▀▀▀▀▀▀▀▀▄▄ ██▄ ▀█▀▀▀█  ▀▄
    █▀▀▀▀▀█ ▄█ █▄▀▀▄█ ▀ █  ▄█
    █ ███ █  ▄█▄█  ███▀▀█ ▄▄ 
    █ ▀▀▀ █ █▄▀▀█▀▄██▄ ██▀ ▀▀
    ▀▀▀▀▀▀▀ ▀▀ ▀▀   ▀▀▀  ▀  ▀
    )";
}


/// @brief Provides a short blurb of of my contact information as well as some fun links.
/// 
/// @return My contact information as well as some fun links.
int main() {
    std::println(
        R"(
    Hi, my name is {}! 
    I am a {} 
    working for {}.
    I can be reached via email at {} 

    The python package used to generate this text can be found at {} 
    and the source can be found at {} 

    QR code to site:
    {} 
    )", name(), title(), company(), email(), site(), source(), qr_code());
}
