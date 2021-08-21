/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palha <palha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:29:45 by palha             #+#    #+#             */
/*   Updated: 2021/08/20 19:29:45 by palha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	size_t	lenl;

	b = 0;
	l = 0;
	lenl = ft_strlen(little);
	if (lenl == 0)
		return ((char *)big);
	while (big[b] != '\0' && len-- >= lenl)
	{
		if (big[b] == little[l]
			&& ft_strncmp(((char *)big + b), little, lenl) == 0)
			return ((char *)big + b);
		b++;
	}
	return (NULL);
}
