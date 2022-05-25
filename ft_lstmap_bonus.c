/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:17:09 by saguesse          #+#    #+#             */
/*   Updated: 2022/05/25 13:02:07 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*new_list;

	if (lst == NULL)
		return (lst);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_element = new_list;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		if (!new_list->next)
		{
			ft_lstclear(&new_element, del);
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
