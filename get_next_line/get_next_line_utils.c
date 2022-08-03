/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:07:07 by feralves          #+#    #+#             */
/*   Updated: 2022/07/18 02:07:08 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if ((char)c == '\0')
		return (&str[ft_strlen(str)]);
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *new_str;
    size_t    len_total;
    size_t    len_s1;
    size_t    len_s2;

    len_s1 = -1;
    len_s2 = 0;
    if (!s1 || !s2)
        return (NULL);
    len_total = (ft_strlen(s1) + ft_strlen(s2)) + 1;
    new_str = malloc (len_total);
    if (!new_str)
        return (NULL);
    while (s1[++len_s1])
        new_str[len_s1] = s1[len_s1];
    while (s2[len_s2])
        new_str[len_s1++] = s2[len_s2++];
    new_str[len_s1] = '\0';
    return (new_str);
}
