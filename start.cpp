#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

main()
{
    string s;
    cout << "nhập tên: ";
    cin >> s;
    cout<< *s.begin()<<endl;
    cout<<s.append("abcde")<<endl;
    cout<<s.compare("asss")<<endl;
    cout<<s.empty()<<endl;
    cout << "nhập giá trị col, query: \n";
    int line, query;
    cin >> line >> query;
    vector<vector<int>> vt;
    vt.resize(line);
    for (int i = 0; i< line; i++){
        
        int col;
        cin >> col;
        vt[i].resize(col);
        for (int j=0; j <= col; j++){
            cin >> vt[i][j];
        }
    }
    for (int i = 0; i < query; i++){
        int k1, k2;
        cin >> k1 >> k2;
        cout << vt[k1][k2]<< "\n";
    }
    return 0;
}