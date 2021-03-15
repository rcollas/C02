/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:49:11 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/15 17:13:05 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[i++] != '\0')
	return i;
}

char	*ft_strcp(char *dest, char *src)
{
	int i;

	i = -1;
	if (ft_strlen(src) < ft_strlen(dest))
		while( i++ < ft_strlen(src))	
			dest[i] = src[i];
		while( i++ < ft_strlen(dest))
			dest[i] = '\0';
	while( i++ < ft_strlen(dest))
		dest[i] = src[i];
	return dest;
}
