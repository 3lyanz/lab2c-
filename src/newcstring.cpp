#include <iostream>

#include "../Include/newcstring.hpp"

using namespace std;

void string_to_upper(char arr[]){
    int size = 0 ;
    while(arr[size] != '\0'){
        size++;
    }
    for (int i = 0; i < size; i++){
        if('a'<= arr[i] && arr[i]<='z'){
            arr[i]-=32;
        }
        cout<<arr[i];
    }
}


void string_to_lower(char arr[]){
    int size = 0 ;
    while(arr[size] != '\0'){
        size++;
    }
    for (int i = 0; i < size; i++){
        if('A'<=arr[i] && arr[i]<='Z'){
            arr[i]+=32;
        }
        cout<<arr[i];
    }
}

bool string_compare(char arr1[], char arr2[]){
    int length1{};
    while(arr1[length1] != '\0'){
        length1++;
    }
    int length2{};
    while(arr2[length2] != '\0'){
        length2++;
    }
    if (length1 == length2){
        int checker;
        while(arr1[checker] != '\0'){
            if(arr1[checker] != arr2[checker]){
                return false;

            }
            checker++;
        }
        return true;
    }
    else {
        return false;
    }
}

void string_copy(char arr[] , char arrcp[] , int capacity)
{
    int size = 0 ;
    while(arr[size] != '\0'){
        size++;
    }

    if(size+1 > capacity){
        
       cout<< "capacity is not enough";
    }


    int counter = 0;
    while(arr[counter] != '\0'){

        arrcp[counter] = arr[counter];
        counter++;
    }
    arrcp[counter] = '\0';
    for(int i = 0; i < counter; i++){
        cout<<arrcp[i];
    }
    cout<<endl;
    cout<<"copied"<<endl;
}


