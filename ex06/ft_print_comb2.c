/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:28:35 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/09 15:41:38 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_answer(int i)
{
	ft_putchar((char)('0' + i / 10));
	ft_putchar((char)('0' + i % 10));
}

void	print_flag(int i, int j)
{
	print_answer(i);
	ft_putchar(' ');
	print_answer(j);
	if (i != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			print_flag(i, j);
			j += 1;
		}
		i += 1;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
