/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 05:03:14 by dbolg             #+#    #+#             */
/*   Updated: 2020/11/30 15:41:06 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "unistd.h"
# include "stdlib.h"
# include "stdio.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# ifndef GET_NEXT_LINE_H
#  define GET_NEXT_LINE_H
# endif

typedef struct		s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *dst, size_t len);
void				*ft_calloc(size_t num, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
void				*ft_memchr(const void *dst, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *dst, int c, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(char *str);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *d, const char *s, size_t maxlen);
size_t				ft_strlcpy(char *dst, const char *src, size_t max);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little, size_t l);
char				*ft_strrchr(const char *str, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
/*
** GNL
*/
int					f_ree(char **str1, char **str2, char **str3);
int					find_n(char *buf, size_t len);
char				*f_calloc(size_t num, size_t size);
size_t				f_strlen(const char *str);
char				*f_strjoin(char const *s1, char const *s2);
int					get_next_line(int fd, char **line);
/*
** ADDED
*/
int					ft_strncpy(char **dest, char *src, unsigned int s_len);
int					f_write(int fd, char *str);
int					f_wr_ch(int fd, char ch);
int					arr_size(char **arr);
/*
** FREE
*/
int					ft_free_arr(char **arr);
int					free1(char **str);
int					free2(char **str, char **str2);
int					free3(char **str, char **str2, char **str3);
/*
** REALLOC
*/
int					add_str_to_arr(char **arr, char *str_to_add);

#endif
