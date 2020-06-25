/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:10:39 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/25 10:42:20 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int r;
	
	r = nb;
	if(power < 0)
	{
		return 0;
	}
	while(power > 0)
	{
		i = nb;
		r = i * r;
		power--;
	}

	return(r);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
		if(nb < 0)
			ft_putchar('-');
	}

}
int main(void)
{
	int x;
	x = ft_iterative_power(2, 4);
	ft_putnbr(x);
	return 0;
}
