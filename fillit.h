/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 20:42:25 by mschroed          #+#    #+#             */
/*   Updated: 2019/01/04 12:48:22 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

# define MINO_SIZE 26

typedef struct		s_mino
{
	struct s_mino	*next;
	size_t			size;
	char			**coordinates;
}					t_mino;

t_mino				*mino_oc(char *file);
t_mino				*fnew_mino(void const *data, size_t size);
void				lst_append(t_mino **head, char *buf);
int					val_mino(t_mino *head);
char				**map(int size);
#endif