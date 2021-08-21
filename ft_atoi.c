/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palha <palha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:34:09 by palha             #+#    #+#             */
/*   Updated: 2021/08/21 19:39:29 by palha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	nbr;
	int	conv;

	sign = 1;
	i = 0;
	nbr = 0;
	conv = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1)
	{
		nbr = (nptr[i] - '0');
		conv = (conv * 10) + nbr;
		i++;
	}
	return (conv * sign);
}

static int	ft_check_overflow(int num, int c_minus)
{
	unsigned int	nb;

	nb = num;
	if (nb > 2147483648 && c_minus)
		return (0);
	if (nb > 2147483647 && !c_minus)
		return (-1);
	return (1);
}
