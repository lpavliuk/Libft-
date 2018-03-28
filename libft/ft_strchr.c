/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:50:53 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/28 19:48:29 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)s;
	while (d[i] != '\0')
	{
		if (d[i] == (char)c)
			break ;
		i++;
	}
	if (d[i] == (char)c)
		return (d + i);
	return (NULL);
}
