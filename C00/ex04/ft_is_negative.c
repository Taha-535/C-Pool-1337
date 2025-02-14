/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Taha <tahaelmoatamid@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:08:33 by Taha              #+#    #+#             */
/*   Updated: 2025/02/12 10:08:33 by Taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
  (n < 0) ? write(1, "N", 1) : write(1, "P\n", 2);
}

int main()
{
  ft_is_negative(1);
  ft_is_negative(0);
  ft_is_negative(-1);
}