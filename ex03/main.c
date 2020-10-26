/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:22:19 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/27 02:26:55 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;

	int b;

	int div;

	int mod;

	a = 13;
	b = 5;
	printf("a : %d, b : %d\n",a,b);
	ft_div_mod(a, b, &div, &mod);
	printf("div : %d, mod : %d\n", div, mod);
}
