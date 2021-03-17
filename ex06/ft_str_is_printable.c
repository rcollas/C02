/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:47:18 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/16 10:32:15 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
	return (1);
}