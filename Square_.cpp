#include<iostream>
#include<conio.h>

using namespace std;

class Square
{
private:
    int dimension;
public:
    Square(int);
    void relleno();
    void hueco();
};

Square::Square(int _dimension)
{
    dimension = _dimension;
}

void Square::hueco()
{   
    
    for (int i = 0; i < dimension ; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if ((i==0)||(j==0)||(j==dimension-1)||(i==dimension-1))
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}

void Square::relleno()
{   
    
    for (int i = 0; i < dimension ; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if (i<dimension || j < dimension)
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
}

int main(){
    int  dimension, opcion; 

    cout<<"Cuadrado\n";
    cout<<"Dimension del cuadrado";
    cin>>dimension;

    Square square1(dimension);
    
    cout<<"1.-Relleno\n 2.-Contorno";
    cin>>opcion;
    
    if (opcion==1)
    {
        square1.relleno();

    }else{
        square1.hueco();
    }
    
    

    return 0;
}
