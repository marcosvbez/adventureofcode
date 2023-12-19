
#include "commom.h"

int main()
{
    std::ifstream myfile;
    myfile.open("inputs/1.txt");
    std::vector<int>digits;
    std::string myline;
    int sum = 0;
    if ( myfile.is_open() ) {
        while ( std::getline(myfile, myline)) 
        { 
            int len = myline.length();
            for (int i = 0; i< len; i++)
            {
                if (isdigit(myline[i])) 
                {  
                  
                    int l = myline[i] - '0';
                    digits.push_back(l);               
                }
               
            }
            sum += digits[0]* 10 +  digits[digits.size()-1];
            digits.clear();
        }
        myfile.close();
    }
    else {
    std::cout << "Couldn't open file\n";
    }
    std::cout << sum;

    
}