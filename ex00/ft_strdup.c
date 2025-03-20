/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:20:26 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/19 15:39:10 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{

	int len = 0;
	while (src[len] != '\0')
		len++;

	char *copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return NULL;

	for (int i = 0; i < len; i++)
		copy[i] = src[i];
	copy[len] = '\0';

	return copy;
}

#include <stdio.h>

int main()
{
        char *original = "Hello, world!";
        char *copy = ft_strdup(original);

	if (copy)
		printf("Copied string: %s\n", copy);
	else
		printf("Memory allocation failed.\n");

	free(copy);
	return (0);
}
