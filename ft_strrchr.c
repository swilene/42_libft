/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:42:48 by saguesse          #+#    #+#             */
/*   Updated: 2022/05/25 14:30:31 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	nb;

	i = ft_strlen(s);
	nb = c;
	while (c >= '0' && c <= '9')
	{
		nb = nb * 10 + c;
		c++;
	}
	while (i >= 0 && s[i] != nb)
		i--;
	if (i != -1)
		return ((char *)(s + i));
	else
		return (NULL);
}
