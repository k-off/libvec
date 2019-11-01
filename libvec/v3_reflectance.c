/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   v3_reflectance.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 18:56:23 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/23 17:53:36 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

static REAL		calc_res(REAL cos_v, REAL cos_r, REAL k1, REAL k2)
{
	REAL	r_orth;
	REAL	r_par;

	r_orth = (k1 * cos_v - k2 * cos_r) / (k1 * cos_v + k2 * cos_r);
	r_par = (k2 * cos_v - k1 * cos_r) / (k2 * cos_v + k1 * cos_r);
	return ((r_orth * r_orth + r_par * r_par) / 2);
}

REAL			v3_reflectance(t_vec3 v, t_vec3 n, REAL k1, REAL k2)
{
	REAL	ratio;
	REAL	cos_v;
	REAL	cos_r;
	REAL	sin_r2;

	ratio = k1 / k2;
	n = v3_norm(n);
	cos_v = -v3_dot(n, v);
	sin_r2 = ratio * ratio * (1.0 - (cos_v * cos_v));
	if (sin_r2 > 1)
		return (1);
	cos_r = sqrtl(1.0 - sin_r2);
	return (calc_res(cos_v, cos_r, k1, k2));
}
