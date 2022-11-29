/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:26:03 by apicanyo          #+#    #+#             */
/*   Updated: 2022/11/29 16:25:44 by alpicany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(3);
	printf("\n");
	ft_putnbr(2141);
	printf("\n");
	ft_putnbr(-2141);
	printf("\n");
	ft_putnbr(-2147483647);
	printf("\n");
	ft_putnbr(2147483647);
	return (0);
}
