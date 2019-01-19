#include <unistd.h>

void rush(int x,int y)
{
	char line;
	char a;
	int hold;

	a = '-';
	hold = x;
	line = 'o';
	while (y-- >=1)
	{	
		x=hold;
		{
			write(1,&line,1);
			while(x-2>=1)
			{	
				write(1, &a, 1);
				x--;
			}
			write(1,&line,1);
		}
		write(1,"\n",1);
	}
}
int main()
{
	rush(5,3);
	return (0);
}
