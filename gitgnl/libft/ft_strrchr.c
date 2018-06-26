/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:56:52 by bmsimang          #+#    #+#             */
/*   Updated: 2018/05/18 14:49:02 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*r;

	x = 0;
	r = NULL;
	while (s[x])
	{
		if (s[x] == c)
			r = s + x;
		x++;
	}
	if (s[x] == c)
		return ((char*)(s + x));
	return ((char*)r);
}
