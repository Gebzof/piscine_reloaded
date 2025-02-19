/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpichon <gpichon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:49:34 by gpichon           #+#    #+#             */
/*   Updated: 2024/11/05 14:43:54 by gpichon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	k;

	while(s1[i])
	{
		if(s1[i] == s2[k])
		{
			k++;
			i++;
		}
		else
			return (s1[i] - s2[k]);
	}
}
