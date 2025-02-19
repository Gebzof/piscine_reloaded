/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpichon <gpichon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:48:49 by gpichon           #+#    #+#             */
/*   Updated: 2024/11/05 13:45:43 by gpichon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void ft_print_alphabet(void)
{
	char	alphabet;

	c = 'a';
	
	while(c < 'z')
	{
		ft_putchar(c++);
	}
}