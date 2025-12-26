#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>

using namespace std;

int main(){
    float count = 0;
    float sum = 0;
    float sum_of_square = 0;
    float Mean;
    float Standard;
    string textline;
     ifstream source("score.txt");
        while(getline(source,textline)){
        sum += stof(textline);
        sum_of_square += pow(stof(textline),2);
        count++;
        }
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    Mean = sum/count;
    cout << "Mean = "<<Mean<<"\n";
    Standard = sqrt(((1/count)*sum_of_square)-pow(Mean,2));
    cout << "Standard deviation = "<<Standard;
}
