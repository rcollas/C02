/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:16:16 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/21 08:54:59 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int set_cap;

	i = -1;
	set_cap = 1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z' && set_cap == 1)
		{
			set_cap = 0;
			str[i] -= 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && set_cap == 0)
			continue;
		else if (((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')) && set_cap == 1)
			set_cap = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z' && set_cap == 0)
			str[i] += 32;
		else if (str[i] >= '0' && str[i] <= '9' && set_cap == 0)
			continue;
		else
			set_cap = 1;
	return (str);
}
