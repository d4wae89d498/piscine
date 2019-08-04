const int	ASCII_LOWCASE = 'a' - 'A'

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 'A' && str[i] < 'Z')
			str[i] += ASCII_LOWCASE;
		i += 1;
	}
	return (str);
}
