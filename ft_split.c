/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarsha <fmarsha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:52:57 by fmarsha           #+#    #+#             */
/*   Updated: 2021/10/18 16:37:45 by fmarsha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int	count_words(char const *s, char c, char flag)
{
	int			num;
	char const	*st;

	st = s;
	num = 0;
	while (*s++ && *(s + 1))
	{
		if (*s == c && *(s + 1) != c)
			num++;
	}
	if (flag)
		free((void *)st);
	return (++num);
}

void	finish_him(char **ss, char *t, int s, size_t l)
{
	if (*t)
		*ss++ = ft_substr(t, s, l);
	*ss = 0;
}

char	**ft_split(char const *s, char c)
{
	char			*t_s;
	char			**ss;
	int				start;
	int				i;
	size_t			len;

	t_s = ft_strtrim(s, &c);
	ss = (char **)malloc(sizeof(char *) * (count_words(t_s, c, 0) + 1));
	i = -1;
	start = -1;
	len = 0;
	while (t_s[++i])
	{
		if (t_s[i] == c && len)
		{
			*ss++ = ft_substr(t_s, start + 1, len);
			len = 0;
		}
		if (t_s[i] == c)
			start = i;
		else
			len++;
	}
	finish_him(ss, t_s, start + 1, len);
	return (ss - count_words(t_s, c, 1) + 1);
}
