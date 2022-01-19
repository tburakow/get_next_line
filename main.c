/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburakow <tburakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:46:57 by tburakow          #+#    #+#             */
/*   Updated: 2022/01/04 16:12:23 by tburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    int x;

    int fd = open("aaa.txt", O_RDONLY);

    while (1)
    {
        x = get_next_line(fd, &s);
		
        printf("Main: %s\n", s);
        if (x <= 0)
            break ;
        free(s);
    }
}