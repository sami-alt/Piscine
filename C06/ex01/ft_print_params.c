/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraiha <sraiha@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:39:40 by sraiha            #+#    #+#             */
/*   Updated: 2024/09/12 16:08:59 by sraiha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{	
	int i;

	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}

	return (0);	
}
