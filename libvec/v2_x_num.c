/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   v2_x_num.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 18:56:23 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/23 17:53:36 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec2	v2_x_num(t_vec2 a, REAL n)
{
	a.x *= n;
	a.y *= n;
	return (a);
}
