/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmisyurk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 23:02:55 by bmisyurk          #+#    #+#             */
/*   Updated: 2017/12/13 17:10:19 by bmisyurk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalizer(char *str)
{
	int	i;



	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] != ' ')
				str[i] = str[i] + 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return  (str) ;
}
