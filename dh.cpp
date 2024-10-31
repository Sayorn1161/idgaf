#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "Firm.h"
#include <vector>
#include <fstream>
#include <algorithm>

class Directory {
public:
    Directory(const std::string& filename);
    ~Directory();

    void addFirm(const Firm& firm);
    void searchByName(const std::string& name) const;
    void searchByOwner(const std::string& owner) const;
    void searchByPhone(const std::string& phone) const;
    void searchByActivity(const std::string& activity) const;
    void displayAll() const;
    void saveToFile() const;

private:
    std::vector<Firm> firms;
    std::string filename;
};

#endif // DIRECTORY_H
