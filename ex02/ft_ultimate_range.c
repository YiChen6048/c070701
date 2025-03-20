/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:48:49 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/19 20:20:57 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}

	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		(*range)[i] = min + i;
	}
	return (size);
}

#include <stdio.h>

int main()
{
	int *arr;
	int size;
	int i;

	size = ft_ultimate_range(&arr,103, 108);
	printf("Size: %d\n", size);

	if (arr)
	{
		for (i = 0; i < size; i++)
		{
			printf("%d\n", arr[i]);
		}
		free(arr);
	}
	return (0);
}
