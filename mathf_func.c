/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <guill@umebrunet.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:08:56 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 15:44:09 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	minf(float a, float b)
{
	if (a < b)
		return (a);
	return (b);
}

float	maxf(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}

float	clampf(float nb, float a, float b)
{
	if (a < b)
		return (max(min(b, nb), a));
	else
		return (max(min(a, nb), b));
}
