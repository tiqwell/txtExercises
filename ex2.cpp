#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string str;
    file.open("k7a-2.txt");
    file >> str;
    file.close();
    int current = 0, max = 0;
    for (int i = 0; i < str.size(); i++) 
    {
        if (str[i] == 'C' || str[i] == 'A' || str[i] == 'D')
            current++;
        else 
        {
            max = std::max(max, current);
            current = 0;
        }
    }
    max = std::max(max, current);
    std::cout << max << std::endl;
    return 0;
}
