/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreno <dmoreno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:35:35 by dmoreno           #+#    #+#             */
/*   Updated: 2024/09/28 21:06:48 by dmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	       return (1);
	return (0);
}


int main () {
	char test_char1 = 'A';
	char test_char2 = '1';

	printf("%c es letra: %d\n", test_char1, ft_isalpha(test_char1));
	printf("%c es letra: %d\n", test_char2, ft_isalpha(test_char2));

	return (0);

}


