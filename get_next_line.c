/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:32:55 by jgavairo          #+#    #+#             */
/*   Updated: 2023/12/08 18:36:05 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define BUFFER_SIZE 5

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buff;
	char	*tmp;
	
	buff = NULL;
	tmp = NULL;
	buff = malloc(BUFFER_SIZE * sizeof(char));
	if (!buff)
		return (NULL);
	while ()
	{
		read()
	}
}

#include <stdio.h>
int	main()
{
	int fd = open("tst.txt", O_RDONLY);
	//get_next_line(fd);
	//get_next_line(fd);
	char *buf = (char *)malloc(BUFFER_SIZE * sizeof(char));
	read(fd, buf, BUFFER_SIZE);
	printf("%s", buf);
	
	free(buf)
}

//Chop la ligne avec \n et after
//Chop ta backup 
// renvoie ta ligne avec \n