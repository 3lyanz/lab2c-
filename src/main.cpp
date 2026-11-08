#include <iostream>
#include "../Include/newcstring.hpp"
using namespace std;

int main(){
    int size=6;
    char arr[size]={'h','a','l','l','o','\0'};
    char arr2[size]={'s','c','f','r','\0'};
    string_to_upper(arr);
    cout<<endl;
    string_to_lower(arr);
    cout<<endl;
    cout << string_compare(arr, arr2) << endl;
    string_copy(arr, arr2, size);
    return 0;
}