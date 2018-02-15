
    #include <vector>
    #include <iostream>
     
     using namespace std;
     
    int main()
    {
        vector<double> a;
        vector<double>::const_iterator i;
        
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        
        for(i=a.begin(); i!=a.end(); i++)
        {
            cout<<(*i)<<endl;
        }
        
        
        return 0;
    }










/*
int main(){
   
 /*int arr[]={4,3,2,1,6,7};
 int target = 5;
 
 int size = sizeof(arr)/sizeof(int);
   cout<<"size1:"<<size<<endl;
 
 arrCheck(arr, size, target);

   */
/* typedef vector<int> int_vec;
 int size = 10;
 vector<int> MyVector(size);
 for (int i=0;i< size ; i++)
     MyVector[i]=i*2;
 
  cout<<MyVector[7]<<endl;
 
 int_vec V2;
 

 
 V2.push_back(12);
 
 for (int i=0;i< size*2 ; i++)
     V2.push_back(i);

 V2.reserve(100);
  cout<<V2[5]<<endl;
 
 cout<<"Cap:"<<V2.capacity()<<endl;
  cout<<"size:"<<V2.size()<<endl;
 
 
 
    return 0;
}


*/