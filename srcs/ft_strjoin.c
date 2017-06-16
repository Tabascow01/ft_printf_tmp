/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:17:12 by mchemakh          #+#    #+#             */
/*   Updated: 2017/06/16 13:41:46 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*mstr;

	if (str1 == NULL && str2 == NULL)
		return (ft_strnew(0));
	else if (str1 == NULL)
		return (ft_strdup(str2));
	else if (str2 == NULL)
		return (ft_strdup(str1));
	mstr = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
	if (mstr == NULL)
		return (0);
	ft_memcpy(mstr, str1, ft_strlen(str1));
	ft_memcpy(mstr + ft_strlen(str1), str2, ft_strlen(str2));
	mstr = ft_reallocf(mstr, 0);
	return (mstr);
}
