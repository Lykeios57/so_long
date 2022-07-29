/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_limits_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 07:55:59 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/07/29 07:56:10 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"
#include "../lib/libft/inc/ft_printf.h"
#include <stdlib.h>

void	ft_limits_error(void)
{
	ft_printf("Error!\nNot enough trees in the screen limits.\n");
	ft_printf("Please, plant 1 in each hole to continue.\n");
	exit(1);
}

void	ft_check_x_limits(t_game *game)
{
	while ((game->x) < (game->map_x))
	{
		if (game->map[0][game->x] != '1')
			ft_limits_error();
		game->x++;
	}
	game->y = game->map_y - 1;
	game->x = 0;
	while ((game->x) < (game->map_x))
	{
		if (game->map[game->y][game->x] != '1')
			ft_limits_error();
		game->x++;
	}
}

void	ft_check_y_limits(t_game *game)
{
	game->x = 0;
	game->y = 0;
	while ((game->y) < (game->map_y))
	{
		if (game->map[game->y][0] != '1')
			ft_limits_error();
		game->y++;
	}
	game->y = 0;
	game->x = game->map_x - 1;
	while ((game->y) < (game->map_y))
	{
		if (game->map[game->y][game->x] != '1')
			ft_limits_error();
		game->y++;
	}
}
