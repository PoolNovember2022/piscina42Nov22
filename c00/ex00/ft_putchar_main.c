/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpicany <alpicany@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:52:58 by alpicany          #+#    #+#             */
/*   Updated: 2022/12/05 04:31:02 by alpicany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 48;
	while (i < 55)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
