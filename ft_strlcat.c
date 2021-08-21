/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palha <palha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:29:16 by palha             #+#    #+#             */
/*   Updated: 2021/08/20 19:52:30 by palha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	kd;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen (dest);
	kd = 0;
	while ((src[kd] != '\0') && ((i + 1) < size))
	{
		dest[i] = src[kd];
		i++;
		kd++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[kd]));
}
