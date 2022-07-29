/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:11:49 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/07/24 15:12:19 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_game
{
	void	*mlx;
	void	*mlx_win;
	char	**map;
	char	*file;
	int		map_x;
	int		map_y;
	int		map_area;
	int		x;
	int		y;
	int		pxl;
	int		player;
	int		pl_x;
	int		pl_y;
	int		pl_mov;
	char	*pl_dir;
	int		collect;
	int		exit;
}	t_game;

void	ft_check_arg(int argc, char **argv);
void	ft_init_struct(t_game *game);
void	ft_validate_map(char **argv, t_game *game);
void	ft_window(t_game *game);

char	*ft_get_map(int fd);
int		ft_check(char *line);
char	*ft_join(char	*line, char c);
void	ft_check_pce(char *buffer, t_game *game);
void	ft_check_map(char *buffer, t_game *game);

void	ft_check_x_limits(t_game *game);
void	ft_check_y_limits(t_game *game);
void	ft_limits_error(void);

void	ft_fill_window(t_game *game);
int		ft_total_collect(t_game *game);
void	ft_fill_floor(t_game *game);
int		ft_close_window(t_game *game);

void	ft_put_limits(t_game *game);
void	ft_put_floor(t_game *game);
void	ft_put_collect(t_game *game);
void	ft_put_player(t_game *game);
void	ft_put_exit(t_game *game);

int		ft_keyboard(int keyhook, t_game *game);
void	ft_move_up(t_game *game);
void	ft_move_down(t_game *game);
void	ft_move_left(t_game *game);
void	ft_move_right(t_game *game);

#endif
