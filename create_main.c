/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <edramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:41:38 by edramire          #+#    #+#             */
/*   Updated: 2020/01/09 13:26:09 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 10
#define P_SIZE 16
#define TYPE 5
#include <stdio.h>

unsigned int	test_pc(unsigned int p)
{
	char *f[] = { 
		"", 
		"0", 
		"-", 
		"-0",
	};
	int n;	
	int size = sizeof(f) / sizeof(char *);
	char c = '%';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\");\n", f[k], f[k], c);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		for (int x = -SIZE; x <=SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d);\n", f[k], x, f[k], c, x);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		}
	}
	return p;
}

unsigned int	test_s(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 's';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		printf("	n = printf(\"F:|%s| |%%%s.%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		for (int x = -SIZE; x <=SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*.%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| p:%3d |%%%s.*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			for (int y = -SIZE; y <=SIZE; y++)
			{
				printf("	n = printf(\"F:|%s| w:%3d p:%3d |%%%s*.*%c|\\n\", %d, %d, %s);\n", f[k], x, y, f[k], c, x, y, str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			}
		}
	}
	return p;
}

unsigned int	test_c(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'c';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		printf("	n = printf(\"F:|%s| |%%%s.%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		for (int x = -SIZE; x <=SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*.%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		}
	}
	return p;
}

unsigned int	test_p(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'p';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		printf("	n = printf(\"F:|%s| |%%%s.%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		for (int x = -P_SIZE; x <= P_SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*.%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
		}
	}
	return p;
}

unsigned int	test_x(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
		"0", 
#ifdef BONUS
		"#", 
		"#-",
		"#0",
#endif
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'x';
	char *t[5] = {"", "l", "ll", "h", "hh"};
	char *ct[5] = {"(unsigned int)", "(unsigned long int)", "(unsigned long long int)", "(unsigned short int)", "(unsigned char)"};
#ifdef BONUS
	for (int j = 0; j < TYPE; j++)
#else
	for (int j = 0; j < 1; j++)
#endif
		for (int k = 0; k < size; k++)
		{
			printf("	n = printf(\"F:|%s| %s|%%%s%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				}
			}
		}
	return p;
}

unsigned int	test_xx(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
		"0", 
#ifdef BONUS
		"#", 
		"#-",
		"#0",
#endif
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'X';
	char *t[5] = {"", "l", "ll", "h", "hh"};
	char *ct[5] = {"(unsigned int)", "(unsigned long int)", "(unsigned long long int)", "(unsigned short int)", "(unsigned char)"};
#ifdef BONUS
	for (int j = 0; j < TYPE; j++)
#else
	for (int j = 0; j < 1; j++)
#endif
		for (int k = 0; k < size; k++)
		{
			printf("	n = printf(\"F:|%s| %s|%%%s%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				}
			}
		}
	return p;
}

unsigned int	test_u(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
		"0", 
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'u';
	char *t[5] = {"", "l", "ll", "h", "hh"};
	char *ct[5] = {"(unsigned int)", "(unsigned long int)", "(unsigned long long int)", "(unsigned short int)", "(unsigned char)"};
#ifdef BONUS
	for (int j = 0; j < TYPE; j++)
#else
	for (int j = 0; j < 1; j++)
#endif
		for (int k = 0; k < size; k++)
		{
			printf("	n = printf(\"F:|%s| %s|%%%s%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				}
			}
		}
	return p;
}

unsigned int	test_d(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
		"0", 
#ifdef BONUS
		"+-",
		"+0",
		"+", 
		" ", 
		" -",
		" 0",
#endif
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'd';
	char *t[5] = {"", "l", "ll", "h", "hh"};
	char *ct[5] = {"(int)", "(long int)", "(long long int)", "(short int)", "(char)"};
#ifdef BONUS
	for (int j = 0; j < TYPE; j++)
#else
	for (int j = 0; j < 1; j++)
#endif
		for (int k = 0; k < size; k++)
		{
			printf("	n = printf(\"F:|%s| %s|%%%s%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				}
			}
		}
	return p;
}

unsigned int	test_i(char *str, unsigned int p)
{
	char *f[] = { 
		"", 
		"-", 
		"0", 
#ifdef BONUS
		"+-",
		"+0",
		"+", 
		" ", 
		" -",
		" 0",
#endif
	};
	int n;
	int size = sizeof(f) / sizeof(char *);
	char c = 'i';
	char *t[5] = {"", "l", "ll", "h", "hh"};
	char *ct[5] = {"(int)", "(long int)", "(long long int)", "(short int)", "(char)"};
#ifdef BONUS
	for (int j = 0; j < TYPE; j++)
#else
	for (int j = 0; j < 1; j++)
#endif
		for (int k = 0; k < size; k++)
		{
			printf("	n = printf(\"F:|%s| %s|%%%s%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10u->%%d\\n\", n);\n", p++);
				}
			}
		}
	return p;
}

int		main(void)
{
	unsigned int p = 0;
	printf("#include <stdio.h>\n");
	printf("#include <limits.h>\n");
	printf("#include \"libftprintf.h\"\n");
	printf("#include \"libft.h\"\n");
	printf("int main(void)\n");
	printf("{\n");
#ifdef BONUS
	printf("int i;\n");
	printf("long int li;\n");
	printf("long long int lli;\n");
	printf("short int si;\n");
	printf("signed char sci;\n");
#endif
	printf("int n;\n\n");
#ifdef PC
	p = test_pc(p);
#endif
#ifdef S
	p = test_s("(void *)0", p);
	p = test_s("\"\"", p);
	p = test_s("\"42MADRID\"", p);
#endif
#ifdef C
	p = test_c("0", p);
	p = test_c("65", p);
	p = test_c("200", p);
	p = test_c("'E'", p);
#endif
#ifdef P
	p = test_p("(void *)0", p);
	p = test_p("(void *)0xe70d68e24", p);
	p = test_p("(void *)0x7ffe70d68e24", p);
#endif
#ifdef U
	p = test_u("0", p);
	p = test_u("UCHAR_MAX", p);
	p = test_u("USHRT_MAX", p);
	p = test_u("UINT_MAX", p);
	p = test_u("ULONG_MAX", p);
	p = test_u("ULLONG_MAX", p);
#endif
#ifdef X
	p = test_x("0", p);
	p = test_x("UCHAR_MAX", p);
	p = test_x("USHRT_MAX", p);
	p = test_x("UINT_MAX", p);
	p = test_x("ULONG_MAX", p);
	p = test_x("ULLONG_MAX", p);
#endif
#ifdef XX
	p = test_xx("0", p);
	p = test_xx("UCHAR_MAX", p);
	p = test_xx("USHRT_MAX", p);
	p = test_xx("UINT_MAX", p);
	p = test_xx("ULONG_MAX", p);
	p = test_xx("ULLONG_MAX", p);
#endif
#ifdef D
	p = test_d("0", p);
	p = test_d("INT_MIN", p);
	p = test_d("INT_MAX", p);
	p = test_d("LONG_MIN", p);
	p = test_d("LONG_MAX", p);
	p = test_d("LLONG_MIN", p);
	p = test_d("LLONG_MAX", p);
	p = test_d("SHRT_MIN", p);
	p = test_d("SHRT_MAX", p);
	p = test_d("CHAR_MIN", p);
	p = test_d("CHAR_MAX", p);
#endif
#ifdef I
	p = test_i("0", p);
	p = test_i("INT_MIN", p);
	p = test_i("INT_MAX", p);
	p = test_i("LONG_MIN", p);
	p = test_i("LONG_MAX", p);
	p = test_i("LLONG_MIN", p);
	p = test_i("LLONG_MAX", p);
	p = test_i("SHRT_MIN", p);
	p = test_i("SHRT_MAX", p);
	p = test_i("CHAR_MIN", p);
	p = test_i("CHAR_MAX", p);
#endif
#ifdef BONUS
	printf("	n = printf(\"%%020d %%n\\n\", 0, &i);\n");
	printf("	printf(\"%%d %%d\\n\", n, i);\n");
	printf("	n = printf(\"%%030d %%ln\\n\", 0, &li);\n");
	printf("	printf(\"%%d %%ld\\n\", n, li);\n");
	printf("	n = printf(\"%%040d %%lln\\n\", 0, &lli);\n");
	printf("	printf(\"%%d %%lld\\n\", n, lli);\n");
	printf("	n = printf(\"%%050d %%hn\\n\", 0, &si);\n");
	printf("	printf(\"%%d %%hd\\n\", n, si);\n");
	printf("	n = printf(\"%%060d %%hhn\\n\", 0, &sci);\n");
	printf("	printf(\"%%d %%hhd\\n\", n, sci);\n");
#endif
	printf("return (0);\n");
	printf("}\n");
}