/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 18:54:39 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/27 19:35:47 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[6];
	int size;
	
	tab[0] = 15;
	tab[1] = 10;
	tab[2] = 100;
	tab[3] = 25;
	tab[4] = 1;
	tab[5] = 55;
	size = 6;

	printf("%d %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}
