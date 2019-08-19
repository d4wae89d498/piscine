/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:27:15 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/19 21:24:57 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = nb;
	if (nb <= 1)
		return (0);
	while (--i > 1)
		if (nb % i == 0)
			return (0);
	return (1);
}
