/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:17:37 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/21 17:23:41 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int x;

	x = argc - 1;
	while (x > 0)
	{
		i = 0;
		while (argv[x][i] != '\0')
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x--;
	}
	return (0);
}
