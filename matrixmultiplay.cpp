//Matrix Multiplication - harsh kumar singh
#include <iostream>
using namespace std;
//creating a class
class matrix{
    private:
    int row1,i,j,col1,row2,col2,temp,arr[100][100],arr1[100][100],arr2[100][100],y;
    public:
    void matmul(){
        for(i=0;i<row1;i++){
        for(j=0;j<row2;j++){
        for (temp=0;temp<col2;temp++){
        arr2[i][j] += arr[i][temp]*arr1[temp][j];
        }
        }
        }
        cout<<"Your Matrix after multiplication is:"<<endl;
        for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
        cout<<" "<<arr2[i][j];
        }
        cout<<endl;
        }
    }
    void matinput(){
        do{
        cout<<"Matrix Multiplication"<<endl;
        cout<<"Enter no. of rows of mat 1: "<<endl;
        cin>>row1;
        cout<<"Enter no. of cols of mat 1: "<<endl;
        cin>>col1;
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                cout<<"Enter element  For matrix 1: "<<j<<endl;
                cin>>arr[i][j];
                }
                }
                cout<<"Your Matrix 1 is "<<endl;
                for(i=0;i<row1;i++){
                for(j=0;j<col1;j++){
                cout<<" "<<arr[i][j];
                }
                cout<<endl;
                }
                cout<<"Enter no. of rows of mat 2: "<<endl;
                cin>>row2;
                cout<<"Enter no. of cols of mat 2: "<<endl;
                cin>>col2;
                for(i=0;i<row2;i++){
                for(j=0;j<col2;j++){
                cout<<"Enter element for matrix 2:  "<<j<<endl;
                cin>>arr1[i][j];
                }
                }
                for(i=0;i<row2;i++){
                for(j=0;j<col2;j++){
                cout<<" "<<arr1[i][j];
                }
                cout<<endl;
                }
                if(col1!=row2){
                    cout<<"Enter Valid Row and matrix for multiplication"<<endl;
                }
                else{
                    matmul();
                }
                cout<<"Do you want to proceed [Y=1/N=0]: "<<endl;
                cin>>y;
                    }while(y==1);
    }
                };
int main(){
matrix m;
m.matinput();
}
