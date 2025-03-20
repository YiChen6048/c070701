/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:45:23 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/19 17:19:37 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min >= max)
		return NULL;

	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return NULL;

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return arr;
}


#include <stdio.h>

int main()
{

	int min = 3, max = 7;
	int *arr = ft_range(min, max);
	int i;

	if (arr == NULL)
	{
		printf("NULL returned\n");
		return 1;
	}

	for (i = 0; i < max - min; i++)
		printf("%d ", arr[i]);

	free(arr);
	return (0);
}
