/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:57:33 by pnurmi            #+#    #+#             */
/*   Updated: 2025/06/09 12:56:43 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dst;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen((char *)src);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (i);
		i++;
	}
	if (str[i] == (char)c)
		return (i);
	return (-1);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	tlen;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	tlen = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	newstr = (char *)malloc(tlen + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j])
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (ft_strlen((char *)s) - start < len)
		len = ft_strlen((char *)s) - start;
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
