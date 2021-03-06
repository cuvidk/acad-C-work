/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:48:45 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 18:57:36 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start_index;
	int		end_index;
	char	*trimmed;

	if (s == NULL)
		return (NULL);
	start_index = 0;
	end_index = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[start_index]) && start_index < end_index)
		++start_index;
	while (ft_iswhitespace(s[end_index]) && end_index > start_index)
		--end_index;
	if (end_index <= start_index)
		trimmed = ft_strnew(sizeof(char));
	else
		trimmed = ft_strnew(sizeof(char) * (end_index - start_index + 2));
	if (trimmed == NULL)
		return (NULL);
	if (end_index > start_index)
		ft_strncpy(trimmed, s + start_index, end_index - start_index + 1);
	else
		trimmed[0] = '\0';
	return (trimmed);
}
