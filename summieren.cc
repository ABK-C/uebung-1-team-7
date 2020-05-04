#include<iostream>
#include <fstream>

using namespace std;

int main()
{

int result;

ifstream myfile;

myfile.open("daten.txt");

    if (!myfile){
        cout << "Unable to open file";
        exit(1);
    }

while(!myfile.eof()){
int array[468];

    for(int i = 0; i < 468; i++){
        myfile >> array[i];
    }

    for(int k = 1; k < 468; k+=2){
   // int line = 0;
    result = array[k] + array[k-1];
   // line = line + 1;
    cout << "result is: " << result << endl;

    }
}

myfile.close();

return 0;
}
