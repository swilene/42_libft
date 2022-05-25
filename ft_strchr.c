/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:23:11 by saguesse          #+#    #+#             */
/*   Updated: 2022/05/25 14:25:41 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	nb;

	nb = c;
	while (c >= '0' && c <= '9')
	{
		nb = nb * 10 + c;
		c++;
	}
	while (*s)
	{
		if (*s == nb)
			return ((char *)s);
		s++;
	}
	if (nb == '\0')
		return ((char *)s);
	return (NULL);
}
