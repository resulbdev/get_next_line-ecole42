/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozdemi <rbozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:18:40 by rbozdemi          #+#    #+#             */
/*   Updated: 2022/11/17 17:11:15 by rbozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 19
# endif
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
int		search_new_line(char *buff, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
#endif