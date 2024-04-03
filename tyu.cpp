#include <iostream>
#include <cmath>
float perimetr (float a, float b)
{
	return 2*(a+b);
}
float ploshad(float a, float b)
{
	return a*b;
}
float diagonal(float a, float b)
{
	return sqrt(pow(a,2)+pow(b,2));
}
int main()
{
	float a=5;
	float b=3;
	std::cout<<"Периметр:"<<perimetr(a,b)<<std::endl;
	std::cout<<"Площадь:"<<ploshad(a,b)<<std::endl;
	std::cout<<"Длина диагонали:"<<diagonal(a,b)<<std::endl;
	return 0;
}
