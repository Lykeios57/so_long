/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:42:59 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/07/24 16:43:17 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str_c;

	str_c = (char *)s;
	i = 0;
	while (i < n)
	{
		*(str_c + i) = 0;
		i++;
	}
}