/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:51:11 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/05 12:38:50 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	aux;

	pos = 0;
	while (pos < size / 2)
	{
		aux = tab[pos];
		tab[pos] = tab[(size - 1) - pos];
		tab[(size - 1) - pos] = aux;
		pos++;
	}	
}
