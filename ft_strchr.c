/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:21:58 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/24 16:50:32 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (i <= s_len)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return(NULL);
}