/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:14:25 by pvieira-          #+#    #+#             */
/*   Updated: 2022/06/15 10:29:58 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	temp;

	if (!lst || !new)
		return ;
	temp = ft_lstlast(*lst);
	new->next = NULL;
	temp_next = new;
}
