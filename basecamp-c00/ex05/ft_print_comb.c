/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doantoni <doantoni@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:39:11 by doantoni          #+#    #+#             */
/*   Updated: 2022/02/18 18:33:36 by doantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n0;
	char	n1;
	char	n2;

	n0 = '0';
	while (n0 <= '7')
	{	
		n1 = n0 + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				write(1, &n0, 1);
				write(1, &n1, 1);
				write(1, &n2, 1);
				if (n0 != '7')
					write(1, ", ", 2);
				n2++;
			}
			n1++;
		}
		n0++;
	}
}
