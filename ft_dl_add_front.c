/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:35:49 by gbrunet           #+#    #+#             */
/*   Updated: 2023/12/13 16:13:53 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dl_add_front(t_dlist **lst, t_dlist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	(*lst)->prev = new;
	*lst = new;
}
