/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 07:54:38 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/16 08:53:56 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	i--;
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}
