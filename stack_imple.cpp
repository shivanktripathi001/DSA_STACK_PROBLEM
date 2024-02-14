#include<iostream>
#include<stack>
using namespace std;


class Stack{


public:

int *arr;
int size;
int top;


Stack(int size){


    arr = new int[size];
    this->size=size;
    this->top=-1;

}




void push(int data){


    if(top == size-1){
        cout<<"overflow"<<endl;
    }

    else{


        top++;
        arr[top] = data;
    }

}

void pop(){

    if(top == -1){
        cout<<"underflow";
    }

    else{
        top--;
    }



}

int top_ele(){

    if(top == -1){

        return -1;
    }

    else{


        return arr[top];
    }


}

int getsize(){

    return top+1;



}


bool isempty(){


    if(top == -1){
        return true;
    }
    else{
        return false;
    }

}


void print(){

    cout<<"top :-"<<top<<endl;
    cout<<"top ele :-"<<top_ele()<<endl;
    cout<<"size of stack ;-"<<getsize()<<endl;


    if(isempty()){
        cout<<"stck is empty"<<endl;
    }

    else{

        cout<<"not empty ;-"<<endl;
    }


    cout<<"stack [";

    for(int i=0;i<getsize();i++){


        cout<<arr[i]<<" ";
    }

    cout<<"]"<<endl;


}



};


int main(){

 
    Stack st(8);


    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.print();




}