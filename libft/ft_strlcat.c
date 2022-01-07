/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:28:42 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/12 14:30:57 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_init;
	size_t	src_init;
	size_t	i;
	size_t	j;

	dst_init = ft_strlen(dst);
	src_init = ft_strlen(src);
	i = dst_init;
	j = 0;
	if (size == 0)
		return (src_init);
	if (size <= dst_init)
		return (src_init + size);
	while (j < size - dst_init - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_init + dst_init);
}
