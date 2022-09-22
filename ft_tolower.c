/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:34:21 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/21 18:48:25 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}