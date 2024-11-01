/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraiha <sraiha@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:52:33 by sraiha            #+#    #+#             */
/*   Updated: 2024/10/30 12:41:34 by sraiha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dest, const char *src, size_t  size)
{   
    char            *tdest;
    const char      *tsrc;
    size_t          i;

    tdest = dest;
    tsrc = src;
    if (size == 0)
        return (0);
    i = 0;
    while (*tsrc && (size - 1) > 0)
    {
        *tdest++ = *tsrc++;
        size--;
        i++;
    }
    dest++;
    *dest = '\0';
    while(*tsrc++)
        i++;
    return (i);
}
