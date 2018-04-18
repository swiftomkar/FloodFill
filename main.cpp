#include <iostream>
using namespace std;
class matrix{
private:
    int* image;
    int rows,cols;
public:
    matrix(int i, int j):rows(i),cols(j),image(new int[i*j]){}
    int getNum(int i,int j){//row,col
        return image[i*cols+j];
    }
    void FloodFill01(int newC,int oldC){
        for(int i=0;i<rows*cols;i++){
            if(image[i]==oldC)
                image[i]=newC;
        }
    }
    void printMatrix(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<< image[i*cols+j]<<'\t';
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
    void setVal(int v){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                image[i*cols+j]=v;
            }
        }
    }
};
int main() {
    matrix myimg(8,8);
    myimg.setVal(3);
    myimg.printMatrix();
    cout<<myimg.getNum(4,4)<<endl;
    myimg.FloodFill01(5,3);
    myimg.printMatrix();

    return 0;
}