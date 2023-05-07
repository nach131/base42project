/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base42_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:47:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/07 19:50:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE42_BONUS_H
# define BASE42_BONUS_H

# include "../libft/inc/colors.h"
# include "../libft/inc/error.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"

# define ERROR_0 "Error: 0"
# define ERROR_1 "Error: Argument is not an integer"
# define ERROR_2 "Error: Duplicate numbers"
# define ERROR_3 "Error: Numbers greater than integer"
# define INFO_1 "Info: 1"

enum
{
	OFF,
	ON,
};

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int				size;
	int				**chunk;
	int				*tp;
}					t_data;

// ▖▖▖▖▖▖▖▖▖▖▖▖▖▖ WORK ▖▖▖▖▖▖▖▖▖▖▖▖▖▖
void				print_util_bonus(void);

#endif
