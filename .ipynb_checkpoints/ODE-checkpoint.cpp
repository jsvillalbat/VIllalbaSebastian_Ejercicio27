#include <iostream>
#include <fstream>
using namespace std;

//Funcion que integra con el método de Euler explicita dada una condición inicia


double* euler(double init, double timestep , int N,string filename) //N longitud del vector
{
    double *y = new double[N];
    y[0] = init; //Condición inicial
    ofstream outfile;
    outfile.open(filename);
     outfile << y[0]<< endl;
    for(int i = 1; i < N;i++)
    {
        y[i] = y[i-1]-timestep*y[i-1];
        outfile << y[i]<< endl; 
    }
     outfile.close(); 
    return y;
}


//Funcion que integra con el método implicito dada una condición inicial
double* implicit(double init, double timestep , int N,string filename) //N longitud del vector
{
    double *y = new double[N];
    y[0] = init; //Condición inicial
    ofstream outfile;
    outfile.open(filename);
    outfile << y[0]<< endl;
    for(int i = 1; i < N;i++)
    {
        double temp = y[i-1]-timestep*y[i-1];
        y[i] = y[i-1]/(1 + timestep);
        outfile << y[i]<< endl;

    }
    outfile.close(); 
    return y;
}




int main (int argc, char **argv) 
{
   string expd001 = "expd1.dat"; 
   string expd01 = "expd2.dat"; 
   string expd1 = "expd3.dat"; 
    
   string eimpd001 = "impd1.dat"; 
   string impd01 = "impd2.dat"; 
   string impd1 = "impd3.dat"; 
    
   double len[3] = {0.1,0.1,1};
   double len1[3] = {4000,400,40};


       euler(1.0,len[0],len1[0],"expd1.dat");
       implicit(1.0,len[0],len1[0],"impd1.dat");
       
       euler(1.0,len[1],len1[1],"expd2.dat");
       implicit(1.0,len[1],len1[1],"impd2.dat");
       
       euler(1.0,len[2],len1[2],"expd3.dat");
       implicit(1.0,len[2],len1[2],"impd3.dat");

   
   return 0;
}

