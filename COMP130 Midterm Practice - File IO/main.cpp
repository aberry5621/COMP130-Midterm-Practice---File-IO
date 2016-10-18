//
//  main.cpp
//  COMP130 Midterm Practice - File IO
//
//  Created by ax on 10/17/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    ofstream iofile;
    
    iofile.open("/Users/ax/test_fileio.txt");
    
    iofile << "hello der";
    
    iofile.close();

    ifstream inputfile;
    
    inputfile.open("/Users/ax/test_fileio.txt");
    
    string inputstr = "";
    
    getline(cin, inputstr);
    
    cout << inputstr << endl;
    
    return 0;
}
