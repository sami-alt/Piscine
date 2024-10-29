/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__sort_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraiha <sraiha@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:09:56 by sraiha            #+#    #+#             */
/*   Updated: 2024/09/12 17:12:38 by sraiha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <uinstd.h>


int strstr(char *str1, char *str2)
{
	while (*str1 && *(str1 == *str2))
		*str1++;
		*str2++;
	return (str1 - str2);
}

void ft_swap(char **c1, char **c2)
{
	char	*temp;
	temp = **c1;
	**c1 = **c2;
	**c2 = temp;
}


void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
	}
}

int		main(int argc, char **argv)
{	
	int	i;
	int	j;
	
	i = 0;
	while(i < argc)
	{
		j = 0;
		while(j < argc)
		{
			if())
		}
	}

	return (0);
}
