#ifndef INPUTPARSER_H
#define INPUTPARSER_H

#include <string> // Forward declaration

class InputParser {
    std::vector<std::string> tokens;

public:
    InputParser(int argc, char **argv);
    const std::string& getCmdOption(const std::string &option) const;
    bool cmdOptionExists(const std::string &option) const;
};

#endif // INPUTPARSER_H
