/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 21:04:26 by mschroed          #+#    #+#             */
/*   Updated: 2019/01/04 16:27:51 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "fillit.h"

int		place(char **mappie, t_mino *mino, int i, int j)
{
	while (mino->coordinates)
	{
		if (mino->coordinates[i][j] == '.')
		{
			i++;
		}
		else
			mappie[i][j] = mino->coordinates[i][j];
	}
}
//take in map
//try to place pieces on map
//use recurssion somewhere
//if pieces don't fit, make new map

