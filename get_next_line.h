/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:57:51 by pnurmi            #+#    #+#             */
/*   Updated: 2025/06/09 12:56:42 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

int		ft_read_buffer(char *read_buff, int fd, char **line);
char	*get_next_line(int fd);
char	*ft_extract_line(char *read_buff, char *line);
size_t	ft_strlen(char *s);
char	*ft_strdup(const char *src);
int		ft_strchr(const char *str, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	ft_shift_buffer(char *read_buff, size_t start);
char	*ft_handle_newline(char *read_buff, int new_pos, char *line);

#endif