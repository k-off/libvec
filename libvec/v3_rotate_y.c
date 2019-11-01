/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   v3_rotate_y.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 18:56:23 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/23 17:53:36 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

void		v3_rotate_y(t_vec3 *v, REAL y)
{
	t_vec3	r;
	REAL	radians;

	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	radians = deg_to_rad(y);
	r.x = v->x * cos(radians) - v->z * sin(radians);
	r.z = v->x * sin(radians) + v->z * cos(radians);
	*v = v3_norm(r);
}
