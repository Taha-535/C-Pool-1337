/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Taha <tahaelmoatamid@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:33:07 by Taha              #+#    #+#             */
/*   Updated: 2025/02/13 21:33:07 by Taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put_comb(char comb[], int n, int nb, int i)
{
  while (i <= 10 - nb)
  {
    comb[n - nb] = i + 48;
    if (nb == 1)
    {
      if (i != n - 1)
      {
        write(1, ", ", 2);
      }
      write(1, comb, n);
      i++;
    }
    else
    {
      ft_put_comb(comb, n, nb - 1, i + 1);
      i++;
    }
  }
}

void ft_print_combn(int n)
{
  char comb[n];

  ft_put_comb(comb, n, n, 0);
}