/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:17:38 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/03 19:24:55 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int arg)
{
	if (arg > 96 && arg < 123)
		arg = arg - 32;
	return (arg);
}
