/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:11:57 by dmoreno           #+#    #+#             */
/*   Updated: 2024/09/28 21:43:59 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main()
{
	int Option1 = 'A';
	
    	// Comprobar si Option1 es un número
    	if (ft_isdigit(Option1))
        	printf("%c es un número.\n", Option1);
    	else
        	printf("%c no es un número.\n", Option1);

    	return (0);	
}
