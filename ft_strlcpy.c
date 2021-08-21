/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palha <palha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:29:21 by palha             #+#    #+#             */
/*   Updated: 2021/08/20 19:29:21 by palha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sizedest)
{
	size_t	sizesrc;
	size_t	i;

	sizesrc = ft_strlen(src);
	i = 0;
	if (!src || !dest)
		return (0);
	if (sizedest != 0)
	{
		while (src[i] != '\0' && i < (sizedest - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (sizesrc);
}
