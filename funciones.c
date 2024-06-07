#include<stdio.h>
#include"funciones.h"
#include<string.h>

void listarProductos(char productos[][3][40],double precio[],int indice[]){
    printf("Numero\tNombre\t\tCategoria\t\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2lf\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);

    }
    
}
void buscarXMarca(char productos[][3][40],double precio[]){
    char marca [40];
    int noexiste=0;
    printf("Ingrese la marca: ");
    scanf("%s", &marca);
    printf("Nombre\t\tCategoria\t\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        if(strcmp(productos[i][2],marca)==0){
            printf("%s\t\t%s\t\t%s\t\t%.2lf\n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste=1;
        }
    }
    if(noexiste==0){
        printf("La marca ingresada no existe\n");
    }
}

void buscarXCategoria(char productos[][3][40],double precio[]){
    char marca [40];
    int noexiste=0;
    printf("Ingrese la categoria: ");
    scanf("%s", &marca);
    printf("Nombre\t\tCategoria\t\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        if(strcmp(productos[i][1],marca)==0){
            printf("%s\t\t%s\t\t%s\t\t%.2lf\n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste=1;
        }
    }
    if(noexiste==0){
        printf("La marca ingresada no existe\n");
    }
}
void buscarXPrecioMenor(char productos[][3][40],double precio[]){
    double preciomax;
    int noexiste=0;
    printf("Ingrese el precio maximo: ");
    scanf("%lf", &preciomax);
    printf("Nombre\t\tCategoria\t\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        if(precio[i]<=preciomax){
            printf("%s\t\t%s\t\t%s\t\t%.2lf\n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste=1;
        }
    }
    if(noexiste==0){
        printf("precio incorrecto\n");
    }
}
void editarProducto(char productos[][3][40],double precio[], int indice[]){
    int num;
    char nuevonombre[40], cat[40], marca[40];
    double precionuevo;
    listarProductos(productos,precio,indice);
    printf("\nIngrese el numero del elemento que desea editar: ");
    scanf("%d", &num);
    num--;
    printf("Ingrese el nuevo nombre: ");
    scanf("%s", &nuevonombre);
    printf("Ingrese la nueva categoria: ");
    scanf("%s", &cat);
    printf("Ingrese la nueva marca: ");
    scanf("%s", &marca);
    printf("Ingrese el nuevo precio: ");
    scanf("%lf", &precionuevo);
    strcpy(productos[num][0], nuevonombre);
    strcpy(productos[num][1], cat);
    strcpy(productos[num][2], marca);
    precio[num]=precionuevo;
    listarProductos(productos,precio,indice);
}