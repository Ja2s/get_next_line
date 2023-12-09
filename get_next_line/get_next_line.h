/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavairon <gavairon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:32:58 by jgavairo          #+#    #+#             */
/*   Updated: 2023/12/09 18:55:49 by gavairon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

//#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5

char			*get_next_line(int fd);
static int		endline_checker(char	*buff);
static	char	*ft_strjoin(char *s1, char* s2);
char			*ft_strdup(char *s);
static size_t 	ft_strlen(char *s);
static char		*ft_substr(char *s, unsigned int start, unsigned int len);
char			*ft_strchr(const char *s, int c);
static	int 	tmp_len(char *tmp);


#endif