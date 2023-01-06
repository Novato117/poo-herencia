#include <iostream>
#include <string.h>
using namespace std;
class persona{
protected:
    char nombre[30];
    int edad;
public:
    persona(char *,int ed);
    void imprime();
};

persona::persona(char *nom,int ed){
    strcpy(nombre,nom);
    edad=ed;
}
void persona::imprime(){
cout<<"\n el nombre : "<<nombre<<endl;
cout<<"\n Edad : "<<edad<<endl;
}

class empleado:public persona{
protected:
    float salario;
public:
    empleado(char *nom,int ed,float sal);
    void imprimeEmpleado();
    ~empleado();
};

empleado::empleado(char *nom,int ed,float sal):persona(nom,ed){
salario=sal;
}

empleado::~empleado(){
}
void empleado::imprimeEmpleado(){
cout<<"\n Empleado: "<<nombre<<endl;
cout<<"\n Salario: "<<salario<<endl;
}

int main(){

//persona objpersona("carlos",22);
//objpersona.imprime();
/*O*/
//persona *objpersona=new persona("carlos",22);
//objpersona->imprime();


///////para la clase derivada

//empleado objempleado("pablo",25,1000);
//objempleado.imprimeEmpleado();
/*O*/
empleado *objempleado=new empleado("luis",18,200);
objempleado->imprieEmpleado();

return 0;
}
