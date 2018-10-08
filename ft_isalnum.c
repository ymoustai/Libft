/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 00:58:58 by ymoustai          #+#    #+#             */
/*   Updated: 2018/10/07 01:01:20 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z') ||
			(c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}