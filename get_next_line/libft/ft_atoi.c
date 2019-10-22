/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduffey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:34:20 by jduffey           #+#    #+#             */
/*   Updated: 2019/06/21 11:38:19 by jduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	char	neg;
	int		i;
	int		x;

	neg = 1;
	i = 0;
	x = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i + 1] >= '0' && s[i + 1] <= '9')
			neg = (s[i++] == '-') ? -1 : 1;
		else
			return (0);
	}
	while (s[i] >= '0' && s[i] <= '9')
		x = x * 10 + (s[i++] - 48);
	return (x * neg);
}
