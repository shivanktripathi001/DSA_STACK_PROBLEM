
#include<iostream>
#include<stack>
using namespace std;



void insert_sorted(stack<int> &st,int &ele){




if(ele > st.top() || st.empty()){


    st.push(ele);
    return;
}

int temp = st.top();
st.pop();

 insert_sorted(st,ele);

 //backtrack

 st.push(temp);




}

void sort_stack(stack<int> &st){


if(st.empty()){

    return;
}

int temp = st.top();
st.pop();

sort_stack(st);

//back track

insert_sorted(st, temp);



}

int main(){



stack<int> st;



    st.push(10);
    st.push(7);
    st.push(12);
    st.push(5);
    st.push(11);


    sort_stack(st);

    cout<<"after "<<endl;
    while(!st.empty()){



        cout<<st.top()<<" ";
        st.pop();
    }


}


