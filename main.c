/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:30:44 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/21 09:30:49 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{

														//strlcat.c
	/*char *s = "mzoli";
	char *d = "zolile";
	printf("ft_strlcat : %lu\n", ft_strlcat(d, s, 5));
	printf("strlcat : %lu\n", strlcat(d, s, 5)); */

	/*char s[] = "zolile";
	char d[] = "mzoli";
	printf("ft_memccpy : %s\n", ft_memccpy(d, s, 'a', 3));	//memccpy
	printf("memccpy : %s\n", memccpy(d, s, 'a', 3));*/

	/*printf("ft_memchr : %s\n", ft_memchr(d, 'n', 6)); //memchr
	printf("memchr : %s\n", memchr(d2, 'n', 6));*/

	/*printf("ft_memcmp : %d\n", ft_memcmp(s, d, 0)); //memcmp
	printf("memcmp : %d\n", memcmp(s1, d2, 0)); */

	/*printf("ft_memset : %s\n", ft_memset(d, 'n', 2)); //memset
	printf("memset : %s\n", memset(d2, 'n', 6)); */

	/*printf("ft_strsub : %s\n", ft_strsub(s, 5, 6));*/ // ft_strsub

														//ft_bzero	
	/*char pt[7] = "zolile"; 
	int	i;

	i = 0;
	ft_bzero((void *)pt, 2);
	while (i < 7)
	{
		if (pt[i] == 0)
			write(1, "null\n", 5);
		else
			write(1, "not null\n", 9);
		i++;
	}*/ //FT_BZERO
/*	arr = ft_strsplit(s, '*');
	i = 0;
	while (arr[i])
		ft_putendl(arr[i++]);*/
	/*
	s = ft_strnew(21);
	ft_strcpy(s, "tumelo***thando*born");
	s = (char *)ft_memset((void *)s, '#', ft_strlen(s));
	ft_putstr(s); */

														//ft_striteri.c	
	/*void	k(unsigned int i, char *s)
	{
		if (i % 2 == 0)
			ft_putstr(s);
		ft_putchar('\n');
	}

		char *str;
		void *f;

		f = &k;
		str = "zolile";
		ft_striteri(str, f);
	*/

														//ft_striter				
	/*char 	*str; 
	void	*f;

	f = &ft_putstr;
	str = "zolile";
	ft_striter(str, f);*/
														//ft_strimapi.c / ft_strmap.c 
	/*char  f(unsigned int i, char c)
	{
		if (i % 2)
		{
			if (( c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
				return (c + 13);
			else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
				return (c - 13);
		}
		return (c);
	}

	char *str;
	char *s;

	s = "zolile";
	str = ft_strmapi(s, f);
	ft_putendl(str); */

															//ft_strtrim.c
	/*char *str;

	str = " \t \t zolile \t";
	ft_putendl(ft_strtrim(str)); */
	return (0);
}
