/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 00:43:43 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/08 10:24:56 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int a[3];

	a[0] = 48;
	while (a[0] < 55)
	{
		a[1] = a[0] + 1;
		while (a[1] < 58)
		{
			a[2] = a[1] + 1;
			while (a[2] < 58)
			{
				write(1, &a[0], 1);
				write(1, &a[1], 1);
				write(1, &a[2], 1);
				write(1, ", ", 2);
				a[2]++;
			}
			a[2] = 48;
			a[1]++;
		}
		a[1] = 48;
		a[0]++;
	}
	write(1, "789", 3);
}
