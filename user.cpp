#include "user.hpp"

User::User(const string& name, const string& phoneNumber)
    : name(name), phoneNumber(phoneNumber) {
        userId = "user"+generate_unique_string_id();
    }

string User::getName() const {
    return name;
}

string User::getPhoneNumber() const {
    return phoneNumber;
}

string User::getUserId() const {
    return(userId);
}