/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:23:20 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 19:23:22 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const  char *str)
{
	int	i;
	int	is_negative;
	long	nbr;

	i = 0;
	is_negative = 0;
	nbr = 0;
	while (ft_iswhitespace(str[i]))
		++i;
	if (str[i] == '-')
	{
		++i;
		is_negative = 1;
	}
	else if (str[i] == '+')
		++i;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		++i;
	}
	return ((int)(nbr) * (is_negative * -1 + 1 * !is_negative));
}
