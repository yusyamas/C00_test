/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:52:30 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/09 15:38:35 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_answer(int *flag, int i, int j, int k)
{
	ft_putchar((char)('0' + i));
	ft_putchar((char)('0' + j));
	ft_putchar((char)('0' + k));
	if (*flag)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	flag_check(int *flag, int i, int j, int k)
{
	if (i == 7)
	{
		*flag = 0;
	}
	print_answer(flag, i, j, k);
}

void	ft_print_comb(void)
{
	int	flag;
	int	i;
	int	j;
	int	k;

	flag = 1;
	i = 0;
	j = 0;
	k = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				flag_check(&flag, i, j, k);
				k += 1;
			}
			j += 1;
		}
		i += 1;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
