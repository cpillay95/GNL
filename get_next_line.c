/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 07:55:18 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/10 08:13:03 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_next_line(const int fd, char **line)
{
	char buffer[2];

	buffer[2] = "";

	if (!fd || fd == NULL)
		return (-1);

    if( !*line )
        *line = malloc(char * sizeof(char));

    *line[0] = '\0';

    while (read(fd, buffer, 1) > 0 ) 
	{
        ft_strncat(*line, buffer, 1);
        if (buffer[0] == '\n' )
            break;
    }

    return 0;
}
