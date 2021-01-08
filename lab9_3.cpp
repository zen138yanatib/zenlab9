#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int count = 0;
    float sum = 0;
    string textline;
    ifstream source;
    source.open("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        count++;
    }
    cout << "Number of data = " << count << endl << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    source.close();
    source.open("score.txt");
    float mean = sum/count;
    sum = 0;
    count = 0;
    while (getline(source,textline))
    {
        sum += ((atof(textline.c_str())-mean)*(atof(textline.c_str())-mean));
        count++;
    }
    float deviation = sqrt(sum/count);
    cout << "Standard deviation = " << deviation ;
    source.close();
    return 0;
}
