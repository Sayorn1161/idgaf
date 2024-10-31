#ifndef FIRM_H
#define FIRM_H

#include <string>
#include <iostream>

class Firm {
public:
    Firm(const std::string& name, const std::string& owner, const std::string& phone, const std::string& address, const std::string& activity);

    std::string getName() const;
    std::string getOwner() const;
    std::string getPhone() const;
    std::string getAddress() const;
    std::string getActivity() const;

    void print() const;

private:
    std::string name;
    std::string owner;
    std::string phone;
    std::string address;
    std::string activity;
};

#endif // FIRM_H
