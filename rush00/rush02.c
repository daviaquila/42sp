/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:06:26 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/07 16:03:33 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char w);

void	print_first(int x)
{
	int i;

	i = 1;
	if (i <= x)
	{
		ft_putchar('A');
		i++;
		while (i < x)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x)
		{
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
}

void	print_middle(int x, int y)
{
	int i;
	int j;

	j = 2;
	while (j < y)
	{
		i = 2;
		ft_putchar('B');
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		if (i == x)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
	}
}

void	print_last(int x)
{
	int i;

	i = 1;
	if (i <= x)
	{
		ft_putchar('C');
		i++;
		while (i < x)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	print_first(x);
	print_middle(x, y);
	if (y != 1)
	{
		print_last(x);
	}
}

