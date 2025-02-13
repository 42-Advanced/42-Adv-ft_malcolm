/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:03:32 by macarval          #+#    #+#             */
/*   Updated: 2024/10/24 11:45:25 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	if (str != NULL)
	{
		i = 0;
		res = malloc ((ft_strlen(str) + 1) * sizeof(char));
		if (!res)
			return (NULL);
		while (str[i])
		{
			res[i] = str[i];
			i++;
		}
		res[i] = '\0';
		str = NULL;
		return (res);
	}
	return (NULL);
}
