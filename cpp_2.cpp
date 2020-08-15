#include <iostream>
/*
В одновимірному  масиві,  що  складається  з n дійсних  елементів,обчислити:кількість елементів масиву, які більше С;множення елементів масиву, розташованих після максимального за модулем елемента.Перетворити  масив  так,  щоб  спочатку  розташовувалися  всі негативні елементи, а потім –усі позитивні (елементи, які дорівнюють0, вважати  позитивними).
*/

void task(int *mass,int size)
{
  int summa_pozitive=0;
  int max=*&mass[0];
  int max_index=0;
  int *ptr;
  int dobytok=1;
  int C_number=0;
  int kolvo_bolshe_C=0;
  std::cout<<"Введіть значення числа С=";
  std::cin>>C_number;
for(int i=0;i<size;i++)
{
  ptr=&mass[i];
 if(*ptr>0) summa_pozitive+=*ptr;
 if(*ptr>C_number)kolvo_bolshe_C+=*ptr;
 if (abs(*ptr)>abs(max))
 {
    max=*ptr;
    max_index=i;
 }
  
}
if (max_index<size-1){
for(int i=max_index+1;i<size;i++)
{
  ptr=&mass[i];
  dobytok*=*ptr;
}
}
std::cout<<"Максимальний по модулю елемент: "<<max<<std::endl;
std::cout<<"Сума  елементів  масиву які більше С=: "<<C_number<<" :"<<kolvo_bolshe_C<<std::endl;
std::cout<<"Добуток  елементів масиву розташованих після  максимального за модулем елементами : "<<dobytok<<std::endl;

///тут должна быть сортировка ---- допилить


std::cout<<"Відсортований масив:\n";
for(int i=0;i<size;i++)
  {
    
      std::cout << mass[i]<<std::endl;
  }
}
int main() {
  int n=0;
  std::cout << "Введіть розмір масиву\n";
  std::cin>>n;
  int *mass=new int[n];
  for(int i=0;i<n;i++)
  {
    mass[i]=rand()%85-44;
      std::cout << mass[i]<<std::endl;
  }
   void (*func_ykazatel)(int *,int) = task; 
    func_ykazatel = task; 
  func_ykazatel(mass,n);
}
