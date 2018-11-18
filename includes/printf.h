/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mtaquet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 12:09:44 by mtaquet      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/16 14:24:10 by mtaquet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <inttypes.h>

struct			s_printf
{
	int	all;
	int	sizefinal;
	int	sizeflags;
	char	conv;
	char	diez;
	char	neg;
	char	pos;
	char	null;
	char	space;
	int	nb_space;
	int	precision;
	char	*lenth;
};

typedef struct s_printf	t_printf;

void	*ft_memalloc(size_t size);
int		ft_strlen(char *str);
int		ft_strchr(char *str, char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_strdel(char **str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_addstr(char *s1, char *s2, int i);
void	ft_dtoa(char **str, long double param, int precision);
void	ft_itoa(char **str, intmax_t param);
void	ft_uitoa(char **str, uintmax_t param);
void	ft_itoa_octal(char **str, uintmax_t param);
void	ft_itoa_basex(char **str, uintmax_t param);
void	ft_itoa_baseupx(char **str, uintmax_t param);
void	ft_itoa_basep(char **str, uintmax_t param);
void	ft_check(t_printf *map, char *str);
char	*ft_strdup(const char *src);
void	ft_normalstr(t_printf *map, char *str);
char	*ft_strncpy(char *dest, char *src, int i);
void	ft_free_struct(t_printf *map);
void	ft_fill_space(t_printf *map, char **str, int use);
void	ft_fill(t_printf *map, char **str, int pos);
void	ft_stradd(t_printf *map, char *param);
void	ft_charadd(t_printf *map, int param);
void	ft_intadd(t_printf *map, intmax_t param);
void	ft_doubleadd(t_printf *map, long double param);
void	ft_unsignedadd(t_printf *map, uintmax_t param);
void	ft_convpadd(t_printf *map, void *param);
void	ft_hexadd(t_printf *map, uintmax_t param);
void	ft_hexupadd(t_printf *map, uintmax_t param);
void	ft_octaladd(t_printf *map, uintmax_t param);
void	ft_allunsigned(t_printf *map, uintmax_t arg);
void	ft_long(t_printf *map, va_list *ap);
void	ft_short(t_printf *map, va_list *ap);
void	ft_othersize(t_printf *map, va_list *ap);
void	ft_percentadd(t_printf *map);
int	ft_atoi(const char *str);

#endif