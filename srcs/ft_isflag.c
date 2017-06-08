/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 01:35:11 by mchemakh          #+#    #+#             */
/*   Updated: 2017/01/31 13:46:49 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isflag(char c)
{
	if (c == '\n' || c == 's' || c == 'S' || c == 'p' || c == 'd'
				|| c == 'D' || c == 'i' || c == 'o' || c == 'O'
				|| c == 'u' || c == 'U' || c == 'x' || c == 'X'
				|| c == 'c' || c == 'C' || c == 'b' || c == 'p')
		return (0);
	return (1);
}