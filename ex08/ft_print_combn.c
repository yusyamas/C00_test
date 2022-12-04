/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:36:41 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/09 15:43:59 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int n, int *num)
{
	int	cnt;

	cnt = 1;
	while (cnt <= n)
	{
		ft_putchar((char)('0' + num[cnt]));
		cnt += 1;
	}
	if (num[1] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_digit(int n, int dig, int *num)
{
	int	i;

	if (dig == n + 1)
	{
		ft_print_numbers(n, num);
		return ;
	}
	i = num[dig - 1] + 1;
	while (i < 10)
	{
		num[dig] = i;
		ft_print_digit(n, dig + 1, num);
		i += 1;
	}
	return ;
}

void	ft_print_combn(int n)
{
	int	num[11];

	num[0] = -1;
	ft_print_digit(n, 1, num);
}

/*
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
*/
