#include<stdio.h>
#include<stdlib.h>
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

int killer()
{
	int killer;
	for(killer = 1; killer <= 4; killer++ )
	{
		//杀手一定再这四个人当中，三个人说了真话，
		//那么将四个人的言论进行逻辑真值加和的到3就行了
		if ( ( (killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) )==3	)
		{
			printf("killer=%c\n", killer+64);
		}
	}
}
int main()
{
	killer();
	system("pause");
	return 0;
}