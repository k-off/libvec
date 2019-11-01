/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   v2_negate.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 18:56:23 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/23 17:53:36 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec2	v2_negate(t_vec2 v)
{
	v.x = -v.x;
	v.y = -v.y;
	return (v);
}