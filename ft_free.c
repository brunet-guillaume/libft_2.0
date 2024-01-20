/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <guill@umebrunet.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:36:35 by gbrunet           #+#    #+#             */
/*   Updated: 2024/01/20 11:36:50 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free(int return_val, int nb_free, ...)
{
	va_list	ap;
	void	*ptr;
	int		i;

	va_start(ap, nb_free);
	i = 0;
	while (i++ < nb_free)
	{
		ptr = va_arg(ap, void *);
		free(ptr);
	}
	return (return_val);
}
