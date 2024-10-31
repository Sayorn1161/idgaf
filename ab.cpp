#include "Firm.h"

Firm::Firm(const std::string& name, const std::string& owner, const std::string& phone, const std::string& address, const std::string& activity)
    : name(name), owner(owner), phone(phone), address(address), activity(activity) {}

std::string Firm::getName() const {
    return name;
}

std::string Firm::getOwner() const {
    return owner;
}

std::string Firm::getPhone() const {
    return phone;
}

std::string Firm::getAddress() const {
    return address;
}

std::string Firm::getActivity() const {
    return activity;
}

void Firm::print() const {
    std::cout << "Name: " << name << "\n"
              << "Owner: " << owner << "\n"
              << "Phone: " << phone << "\n"
              << "Address: " << address << "\n"
              << "Activity: " << activity << "\n";
}
