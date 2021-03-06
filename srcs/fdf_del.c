/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 16:14:35 by aanzieu           #+#    #+#             */
/*   Updated: 2017/03/13 11:38:45 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

t_image	*del_image(t_env *e, t_image *img)
{
	if (img != NULL)
	{
		if (img->img != NULL)
			mlx_destroy_image(e->mlx, img->img);
		ft_memdel((void **)&img);
	}
	return (NULL);
}

t_env	*fdf_mlx_del(t_env *e)
{
	if (e->win != NULL)
		mlx_destroy_window(e->mlx, e->win);
	if (e->image != NULL)
		del_image(e, e->image);
	return (NULL);
}

void	fdf_del(t_env *e)
{
	ft_bzero(e->image->img_s, WIN_HEIGTH * WIN_WIDTH * e->image->bpp);
	expose_hook(e);
}

void	fdf_too_many_arg(int argc)
{
	if (argc < 2)
	{
		ft_putstr_fd("No <filename>\n", 2);
		exit(0);
	}
	if (argc >= 4)
	{
		ft_putstr_fd("Too many arg\n", 2);
		exit(0);
	}
}
