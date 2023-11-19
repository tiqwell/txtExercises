#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string str;
    file.open("k7c-1.txt");
    file >> str;
    file.close();
    int current = 0, max = 0;
    for (int i = 0; i < str.size(); i++) 
    {
        if(str[i] == 'B' || str[i] == 'C' || str[i] == 'D')
        {
            if ((str[i + 1] == 'B' || str[i + 1] == 'E' || str[i + 1] == 'D') && str[i] != str[i + 1])
            {
                if ((str[i + 2] == 'B' || str[i + 2] == 'E' || str[i + 2] == 'C') && str[i + 1] != str[i + 2])
                    max++;
            }
        }
    }
    std::cout << max << std::endl;
    return 0;
}
