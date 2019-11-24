/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <edramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:41:38 by edramire          #+#    #+#             */
/*   Updated: 2019/11/24 10:15:30 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 10
#define P_SIZE 16
#define TYPE 5
#include <stdio.h>

void	test_pc(void)
{
	char *f[] = { 
		"", 
		"0", 
		"-", 
		"-0",
	};
	int n;
	long int p = 0;
	int size = sizeof(f) / sizeof(char *);
	char c = '%';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\");\n", f[k], f[k], c);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		for (int x = -SIZE; x <=SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d);\n", f[k], x, f[k], c, x);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		}
	}
}

void	test_s(char *str)
{
	char *f[] = { 
		"", 
		"-", 
	};
	int n;
	long int p = 0;
	int size = sizeof(f) / sizeof(char *);
	char c = 's';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		printf("	n = printf(\"F:|%s| |%%%s.%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		for (int x = -SIZE; x <=SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*.%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| p:%3d |%%%s.*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			for (int y = -SIZE; y <=SIZE; y++)
			{
				printf("	n = printf(\"F:|%s| w:%3d p:%3d |%%%s*.*%c|\\n\", %d, %d, %s);\n", f[k], x, y, f[k], c, x, y, str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			}
		}
	}
}

void	test_c(char *str)
{
	char *f[] = { 
		"", 
		"-", 
	};
	int n;
	long int p = 0;
	int size = sizeof(f) / sizeof(char *);
	char c = 'c';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		printf("	n = printf(\"F:|%s| |%%%s.%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		for (int x = -SIZE; x <=SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*.%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		}
	}
}

void	test_p(char *str)
{
	char *f[] = { 
		"", 
		"-", 
	};
	int n;
	long int p = 0;
	int size = sizeof(f) / sizeof(char *);
	char c = 'p';
	for (int k = 0; k < size; k++)
	{
		printf("	n = printf(\"F:|%s| |%%%s%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		printf("	n = printf(\"F:|%s| |%%%s.%c|\\n\", %s);\n", f[k], f[k], c, str);
		printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		for (int x = -P_SIZE; x <= P_SIZE; x++)
		{
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| w:%3d |%%%s*.%c|\\n\", %d, %s);\n", f[k], x, f[k], c, x, str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
		}
	}
}

void	test_x(char *str)
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
	long int p = 0;
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
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				}
			}
		}
}

void	test_xx(char *str)
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
	long int p = 0;
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
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				}
			}
		}
}

void	test_u(char *str)
{
	char *f[] = { 
		"", 
		"-", 
		"0", 
	};
	int n;
	long int p = 0;
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
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				}
			}
		}
}

void	test_d(char *str)
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
	long int p = 0;
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
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				}
			}
		}
}

void	test_i(char *str)
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
	long int p = 0;
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
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			printf("	n = printf(\"F:|%s| %s|%%%s.%s%c|\\n\", %s%s);\n", f[k], ct[j], f[k], t[j], c, ct[j], str);
			printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
			for (int x = -SIZE; x <=SIZE; x++)
			{
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| w:%3d %s|%%%s*.%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				printf("	n = printf(\"F:|%s| p:%3d %s|%%%s.*%s%c|\\n\", %d, %s%s);\n", f[k], x, ct[j], f[k], t[j], c, x, ct[j], str);
				printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				for (int y = -SIZE; y <=SIZE; y++)
				{
					printf("	n = printf(\"F:|%s| w:%3d p:%3d %s|%%%s*.*%s%c|\\n\", %d, %d, %s%s);\n", f[k], x, y, ct[j], f[k], t[j], c, x, y, ct[j], str);
					printf("	printf(\"%10ld->%%d\\n\", n);\n", p++);
				}
			}
		}
}

int		main(void)
{
	printf("#include <stdio.h>\n");
	printf("#include <limits.h>\n");
	printf("#include \"libft.h\"\n");
	printf("int main(void)\n");
	printf("{\n");
#ifdef BONUS
	printf("int i;");
	printf("long int li;");
	printf("long long int lli;");
	printf("short int si;");
	printf("signed char sci;");
#endif
	printf("int n;\n\n");
	test_pc();
	test_s("(void *)0");
	test_s("\"\"");
	test_s("\"42MADRID\"");
	test_c("0");
	test_c("65");
	test_c("200");
	test_c("'E'");
	test_p("(void *)0");
	test_p("(void *)0xe70d68e24");
	test_p("(void *)0x7ffe70d68e24");
	test_u("0");
	test_u("UCHAR_MAX");
	test_u("USHRT_MAX");
	test_u("UINT_MAX");
	test_u("ULONG_MAX");
	test_u("ULLONG_MAX");
	test_x("0");
	test_x("UCHAR_MAX");
	test_x("USHRT_MAX");
	test_x("UINT_MAX");
	test_x("ULONG_MAX");
	test_x("ULLONG_MAX");
	test_xx("0");
	test_xx("UCHAR_MAX");
	test_xx("USHRT_MAX");
	test_xx("UINT_MAX");
	test_xx("ULONG_MAX");
	test_xx("ULLONG_MAX");
	test_d("0");
	test_d("INT_MIN");
	test_d("INT_MAX");
	test_d("LONG_MIN");
	test_d("LONG_MAX");
	test_d("LLONG_MIN");
	test_d("LLONG_MAX");
	test_d("SHRT_MIN");
	test_d("SHRT_MAX");
	test_d("CHAR_MIN");
	test_d("CHAR_MAX");
	test_i("0");
	test_i("INT_MIN");
	test_i("INT_MAX");
	test_i("LONG_MIN");
	test_i("LONG_MAX");
	test_i("LLONG_MIN");
	test_i("LLONG_MAX");
	test_i("SHRT_MIN");
	test_i("SHRT_MAX");
	test_i("CHAR_MIN");
	test_i("CHAR_MAX");
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