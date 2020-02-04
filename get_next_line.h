/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkuksa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:58:24 by bkuksa            #+#    #+#             */
/*   Updated: 2018/12/05 16:51:50 by bkuksa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "Libft/libft.h"
# define BUFF_SIZE 10
# define MAX_FD 4900

int		get_next_line(const int fd, char **line);
char	*ft_realloc(char *line, size_t new_size);
int		ft_fill_line(char *buff, char **line);

#endif
