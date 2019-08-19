/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:27:39 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/19 21:59:41 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	int		i;

	i = nb;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = i % 2 == 0 ? i - 1 : i - 2;
	while (i > 1)
		if (nb % i == 0)
			return (0);
		else
			i -= 2;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb % 2 == 0 ? nb + 1 : nb;
	while (i <= 2147483647)
		if (ft_is_prime2(i))
			return (i);
		else
			i += 2;
	return (0);
}
