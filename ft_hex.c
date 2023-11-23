/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:14:01 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/11/22 16:35:15 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_hex(unsigned int num, char c)
{
	int	aux;
	char	*hex;

	aux = 0;
	if (c == 'x' || c == 'p')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num > 15)
	{
		ft_hex(num / 16, c);
		aux ++;
	}
	aux ++;
	write(1, &hex[num % 16], 1);
	return (aux);
}
