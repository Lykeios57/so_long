/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 07:18:50 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/07/29 07:18:59 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, len);
	return (s2);
}
