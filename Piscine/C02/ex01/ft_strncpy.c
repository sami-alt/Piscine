/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraiha <sraiha@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:19:15 by sraiha            #+#    #+#             */
/*   Updated: 2024/09/11 11:45:17 by sraiha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*src && i < n)
	{
		*temp++ = *src++;
		i++;
	}
	while (i < n)
	{
		*temp = '\0';
		temp++;
		i++;
	}
	return (dest);
}
