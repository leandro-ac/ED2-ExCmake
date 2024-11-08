#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <string>

class Message {
public:
    Message(const std::string &text);
    void showMessage() const;

private:
    std::string message;
};

#endif // MESSAGE_HPP
