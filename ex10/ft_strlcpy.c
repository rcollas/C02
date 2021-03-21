/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:16:37 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/21 08:57:23 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = -1;
	while (++i + 1 < size && src[i])
		dest[i] = src[i];
	if (size > 0)
		dest[i] = 0;
	return (i);
}
