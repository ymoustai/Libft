/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmb_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 01:29:29 by ymoustai          #+#    #+#             */
/*   Updated: 2018/10/08 01:31:13 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_number_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (n == 0)
		return (1);
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
