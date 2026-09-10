#include <iostream>
using namespace std;

int global_var = 77;

//function = pointer to a pointer
void changePointer(int** p){
    //*p represents the orginal pointer
    //we change it so that it points t a gloabal variable
    *p = &global_var;
}

int main(){
    int local_var = 15;
    
    //p_to_var point to the local varibale
    int* p_to_var = &local_var;
    
    cout << "---Before fuction call--" << endl;
    cout << "local_var = " << local_var << endl;
    cout << "*P_to_var = " << *p_to_var << endl;
    cout << "P_to_var = " << p_to_var << endl;
    cout << "address of local_var = " << &local_var << endl << endl;
    
    //pass the address of the pointer
    changePointer(&p_to_var);
    
    cout << "---After fuction call--" << endl;
    cout << "local_var = " << local_var << endl;
    cout << "*P_to_var = " << *p_to_var << endl;
    cout << "P_to_var = " << p_to_var << endl;
    cout << "address of local_var = " << &local_var << endl << endl;
    
}