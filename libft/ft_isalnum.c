/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:58:30 by dmoreno           #+#    #+#             */
/*   Updated: 2024/09/28 22:47:33 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	
	if(c >= '1' && c <= '9')
		return(1);

	return(0);
	
}

int main()
{
		
	int Dato = 'A';

	if(ft_isalnum(Dato))
		printf("%c Es un número o una letra.\n", Dato);
	
	else
		printf("%c No es número Ni letra.\n", Dato);
	return (0);

}
