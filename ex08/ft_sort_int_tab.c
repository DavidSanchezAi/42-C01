/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:39:53 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/05 13:31:42 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	cont2;
	int	aux;

	cont = size;
	cont2 = -1;
	while (--cont != 0)
	{
		while (++cont2 != size - 1)
		{
			if (tab[cont2] > tab[cont2 + 1])
			{
				aux = tab[cont2];
				tab[cont2] = tab[cont2 + 1];
				tab[cont2 + 1] = aux;
			}
		}
		cont2 = -1;
	}
}
