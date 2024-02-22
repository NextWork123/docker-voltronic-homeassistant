#include "inputparser.h"
#include <algorithm>

InputParser::InputParser(int argc, char **argv) {
    for (int i = 1; i < argc; ++i)
        tokens.push_back(std::string(argv[i]));
}

const std::string& InputParser::getCmdOption(const std::string &option) const {
    static const std::string empty_string("");
    auto itr = std::find(tokens.begin(), tokens.end(), option);
    if (itr != tokens.end() && ++itr != tokens.end())
        return *itr;
    return empty_string;
}

bool InputParser::cmdOptionExists(const std::string &option) const {
    return std::binary_search(tokens.begin(), tokens.end(), option);
}
