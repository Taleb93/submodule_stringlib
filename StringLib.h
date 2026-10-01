#pragma once
#include <string>
#include <algorithm>
//////
// Einfache Klasse fuer String-Hilfsfunktionen
class TextHelper {
public:
    std::string toUpper(const std::string& text) {
        std::string result = text;
        std::transform(result.begin(), result.end(), result.begin(), ::toupper);
        return result;
    }

    std::string reverse(const std::string& text) {
        std::string result = text;
        std::reverse(result.begin(), result.end());
        return result;
    }
};
