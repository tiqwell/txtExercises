#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string str;
    file.open("k7-84.txt");
    file >> str;
    file.close();
    int current = 0, max = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'C')
            current++;
        else {
            max = std::max(max, current);
            current = 0;
        }
    }

    if (current > max)
        max = current;

    std::cout << max << std::endl;
    return 0;
}