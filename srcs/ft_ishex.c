/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 23:50:50 by mchemakh          #+#    #+#             */
/*   Updated: 2017/04/10 03:05:49 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_ishex(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '0' && str[1] == '\0')
			return (0);
		if (!ft_isdigit(str[i]) && str[i] < 'a' && str[i] > 'z'
				&& str[i] < 'A' && str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
