/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doantoni <doantoni@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:21:51 by doantoni          #+#    #+#             */
/*   Updated: 2022/02/18 18:33:23 by doantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
		write(1, "P", 1);
	else if (n < 0)
		write(1, "N", 1);
	else
		return ;
}
