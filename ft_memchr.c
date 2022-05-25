/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:40:23 by saguesse          #+#    #+#             */
/*   Updated: 2022/05/25 14:33:13 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char			*str;
	long unsigned int	i;
	char				nb;

	str = s;
	i = 0;
	nb = c;
	while (c >= '0' && c <= '9')
	{
		nb = nb * 10 + c;
		c++;
	}
	while (i < n)
	{
		if (str[i] == nb)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
