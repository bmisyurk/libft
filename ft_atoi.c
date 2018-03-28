/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmisyurk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:29:31 by bmisyurk          #+#    #+#             */
/*   Updated: 2017/11/10 19:29:32 by bmisyurk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_atoi(char *str)
{
    int index;
    int a;
    int b;
    
    a = 0;
    b = 1;
    index = 0;
    while (str[index] < 33)
        index++;
    if (str[index] == '-')
    {
        b = -1;
        index++;
    }
    else if (str[index] == '+')
        index++;
    if (!(str[index] > 47 && str[index] < 58))
        return (0);
    while ((str[index] > 47 && str[index] < 58))
    {
        a = a * 10;
        a = a + (str[index] - 48);
        index++;
    }
    return (a * b);
}

