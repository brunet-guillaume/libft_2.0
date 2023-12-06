NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c \
		ft_printf.c options.c percent_parcer.c print_c.c print_s.c print_p.c print_d.c \
		print_u.c print_x.c print_x_helper.c helper.c print_d_helper.c print_u_helper.c \
		get_next_line.c get_next_line_utils.c maths_func.c

ALLSRCS = $(SOURCES) $(BONUS)

OBJECTS = $(SOURCES:.c=.o)

ALLOBJS = $(ALLSRCS:.c=.o)

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@ -I ./

.PHONY : all clean fclean re bonus

$(NAME) : $(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

all : $(NAME)

clean :
		$(RM) $(ALLOBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

