#include "Message.hpp"
#include <iostream>

Message::Message(const std::string &text) : message(text) {}

void Message::showMessage() const {
    std::cout << message << std::endl;
}
