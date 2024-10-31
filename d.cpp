
#include "Directory.h"

Directory::Directory(const std::string& filename) : filename(filename) {
    std::ifstream inFile(filename);
    std::string name, owner, phone, address, activity;
    while (inFile >> name >> owner >> phone >> address >> activity) {
        firms.emplace_back(name, owner, phone, address, activity);
    }
}

Directory::~Directory() {
    saveToFile();
}

void Directory::addFirm(const Firm& firm) {
    firms.push_back(firm);
}

void Directory::searchByName(const std::string& name) const {
    auto it = std::find_if(firms.begin(), firms.end(), [&name](const Firm& firm) {
        return firm.getName() == name;
    });
    if (it != firms.end()) {
        it->print();
    } else {
        std::cout << "Firm not found\n";
    }
}

void Directory::searchByOwner(const std::string& owner) const {
    auto it = std::find_if(firms.begin(), firms.end(), [&owner](const Firm& firm) {
        return firm.getOwner() == owner;
    });
    if (it != firms.end()) {
        it->print();
    } else {
        std::cout << "Firm not found\n";
    }
}

void Directory::searchByPhone(const std::string& phone) const {
    auto it = std::find_if(firms.begin(), firms.end(), [&phone](const Firm& firm) {
        return firm.getPhone() == phone;
    });
    if (it != firms.end()) {
        it->print();
    } else {
        std::cout << "Firm not found\n";
    }
}

void Directory::searchByActivity(const std::string& activity) const {
    auto it = std::find_if(firms.begin(), firms.end(), [&activity](const Firm& firm) {
        return firm.getActivity() == activity;
    });
    if (it != firms.end()) {
        it->print();
    } else {
        std::cout << "Firm not found\n";
    }
}

void Directory::displayAll() const {
    for (const auto& firm : firms) {
        firm.print();
        std::cout << "-----------------\n";
    }
}

void Directory::saveToFile() const {
    std::ofstream outFile(filename);
    for (const auto& firm : firms) {
        outFile << firm.getName() << " " << firm.getOwner() << " " << firm.getPhone() << " " << firm.getAddress() << " " << firm.getActivity() << "\n";
    }
}
