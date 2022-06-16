/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:18:15 by pvieira-          #+#    #+#             */
/*   Updated: 2022/06/16 06:04:55 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*temp;

	count = 1;
	temp = lst;
	if (lst == NULL)
		return (0);
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
//	if (temp->next == NULL)
//		count++;
	return (count);
}
