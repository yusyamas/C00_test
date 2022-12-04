/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:28:46 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/08 15:28:26 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	neg_c;
	char	pos_c;

	neg_c = 'N';
	pos_c = 'P';
	if (n < 0)
	{
		ft_putchar(neg_c);
	}
	else
	{
		ft_putchar(pos_c);
	}
}

/*
int	main(void){
    ft_is_negative(1);
    return (0);
}
*/
