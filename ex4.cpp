#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string str;
    file.open("k8-6.txt");
    file >> str;
    file.close();
    int current = 1, max = 1;
    char symbol = ' ';

    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1]) {
            current++;
        }
        else 
        {
            if (current > max)
            {
                max = current;
                symbol = str[i - 1];
            }
            current = 1;
        }
    }
    if (current > max)
    {
        max = current;
        symbol = str[str.size() - 1];
    }
    std::cout << symbol << " " << max << std::endl;

    return 0;
}
