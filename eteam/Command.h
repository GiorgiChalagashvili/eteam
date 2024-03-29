#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Command.h"
#include "Product.h"
#include "Store.h"

class Command {
public:
    Store* store;

    Command(Store* nikora);

    void execute(std::string command);

    ~Command() {}

private:
    std::vector<std::string> split(std::string& user_input);
};
