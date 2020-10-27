/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:02:03 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/27 18:53:56 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
int		main(void)
{
	int tab[5];
	int size;

	tab[0] = 5;
	tab[1] = 10;
	tab[2] = 15;
	tab[3] = 20;
	tab[4] = 25;
	size = 5;

	printf("%d %d %d %d %d \n", tab[0],tab[1],tab[2],tab[3],tab[4]);
	ft_rev_int_tab(tab, size);
	printf("%d %d %d %d %d \n", tab[0],tab[1],tab[2],tab[3],tab[4]);
}
