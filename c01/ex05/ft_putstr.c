/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeunjeon <jeunjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 20:25:24 by jeunjeon          #+#    #+#             */
/*   Updated: 2020/07/07 09:38:47 by jeunjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int		i;
	char	temp;

	i = -1;
	while (str[++i] != '\0')
	{
		temp = str[i];
		write(1, &temp, 1);
	}
}