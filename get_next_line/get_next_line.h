/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:01:28 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/31 15:06:51 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define CH '\n'

char	*get_next_line(int fd);
char	*ft_append(char *base, char *app, size_t app_size);
void	*ft_calloc(size_t elem, size_t size_elem);
size_t	ft_strchr(char *str, char ch);

#endif