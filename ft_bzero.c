/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:53:29 by jomatic           #+#    #+#             */
/*   Updated: 2026/04/24 16:28:32 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(char *)s++ = '\0';
		i++;
	}
}

#include <strings.h>
#include <stdio.h>
int main()
{
	char str[20] = "Some string to test";
	char my_bzero[20] = "Some string to test";
	size_t n = 6;

	for(size_t i = 0; i < n; i++)
	{
		printf("bzero %c", bzero(str, 5));
		printf("my_bzero: %c", ft_bzero(my_bzero, 6)); 
	}
}
