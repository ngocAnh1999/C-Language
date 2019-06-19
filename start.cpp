#include <iostream> 
#include <vector>
using namespace std;
int main()
{
    cout<<"This is my first C++ Program.";
    cout<<std::endl<<"and its very easy to learn";
    int x;
    cin>>x;
    cout<<x<<endl;
    vector<int> vc;
    vc.push_back(66);
    cout<<vc[0];
}