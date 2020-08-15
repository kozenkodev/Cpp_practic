#include <iostream>
/*
В одновимірному  масиві,  що  складається  з nречових  елементів, обчислити:суму позитивних елементів масиву;множення елементів  масиву,  розташованих  між  максимальним  за модулемі мінімальним за модулем елементами.Упорядкувати елементи масиву за убуванням.
*/

void task(int *mass,int size)
{
  int summa_pozitive=0;
  int max=*&mass[0];
  int min=*&mass[0];
  int min_index=0,max_index=0;
  int *ptr;
  int dobytok=1;
for(int i=0;i<size;i++)
{
  ptr=&mass[i];
 if(*ptr>0) summa_pozitive+=*ptr;
 if (abs(*ptr)>abs(max))
 {
    max=*ptr;
    max_index=i;
 }
  if (abs(*ptr)<abs(min))
 {
    min=*ptr;
    min_index=i;
 }
}
for(int i=min_index+1;i<max_index;i++)
{
  ptr=&mass[i];
  dobytok*=*ptr;
}
std::cout<<"Максимальний по модулю елемент: "<<max<<std::endl;
std::cout<<"Мінімальний по модулю елемент: "<<min<<std::endl;
std::cout<<"Сума позитивних елементів масиву: "<<summa_pozitive<<std::endl;
std::cout<<"Добуток  елементів масиву розташованих між  максимальним та мінімальним за модулем елементами : "<<dobytok<<std::endl;



for(int i = 1; i < size; ++i)
{
	for(int r = 0; r < size-i; r++)
	{
		if(mass[r] < mass[r+1])
		{
		
			int temp = mass[r];
			mass[r] = mass[r+1];
			mass[r+1] = temp;
		}
	}
}
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
