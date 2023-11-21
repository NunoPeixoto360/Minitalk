/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmendes- <nmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:45:39 by nmendes-          #+#    #+#             */
/*   Updated: 2023/07/13 12:45:39 by nmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signal)
{
	printf("Signal %d received\n", signal);
}

int	main()
{
	int	pid;

	pid = getpid();
	signal(SIGUSR1, signal_handler);
	printf("the server is running...\n");
	printf("the server's pid is: %d\n", pid);
	pause();
	printf("server exiting...\n");

	return (0);
}