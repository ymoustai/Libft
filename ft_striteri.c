/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 05:08:01 by ymoustai          #+#    #+#             */
/*   Updated: 2018/10/08 05:09:54 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int				i;
	unsigned int	n;

	if (s && f)
	{
		i = 0;
		n = 0;
		while (s[i])
		{
			f(n, &s[i]);
			n++;
			i++;
		}
	}
}
