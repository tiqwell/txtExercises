#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string str;
    file.open("k8-1.txt");
    file >> str;
    file.close();
    int current = 0, max = 0;
    for (int i = 1; i < str.size() - 1; i++) {
        if (str[i] != str[i - 1]) 
            current++;
        else 
        {
            max = std::max(current, max);
            current = 0;
        }
    }
    max = std::max(current, max);
    std::cout << max << std::endl;
    return 0;
}
