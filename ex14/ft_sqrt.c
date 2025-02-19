/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpichon <gpichon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:04:43 by gpichon           #+#    #+#             */
/*   Updated: 2024/11/05 14:38:21 by gpichon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i < 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	int a = ft_sqrt(25);
	printf("%d",a);
}