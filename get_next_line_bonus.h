/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozdemi <rbozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:43:08 by rbozdemi          #+#    #+#             */
/*   Updated: 2022/11/18 13:44:10 by rbozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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