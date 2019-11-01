/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libvec.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 18:56:23 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/23 17:53:36 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL

# define REAL double

#endif

#ifndef __LIBVEC_H
# define __LIBVEC_H

# include <math.h>

typedef struct	s_vec2
{
	REAL		x;
	REAL		y;
}				t_vec2;

typedef struct	s_vec3
{
	REAL		x;
	REAL		y;
	REAL		z;
}				t_vec3;

/*
**general purpose functions
*/

REAL			deg_to_rad(REAL degrees);
REAL			rad_to_deg(REAL radians);

/*
**2D vectors
*/

t_vec2			v2_a_to_b(t_vec2 a, t_vec2 b); /* vector form a to b  (b - a) */
t_vec2			v2_add(t_vec2 a, t_vec2 b); /* summ (a + b) */
REAL			v2_distnce(t_vec2 a, t_vec2 b); /* length of (a - b) */
REAL			v2_dot(t_vec2 a, t_vec2 b); /* dot product (a * b) */
REAL			v2_angle_deg(t_vec2 a, t_vec2 b); /* angle between vect., deg */
REAL			v2_angle_rad(t_vec2 a, t_vec2 b); /* angle between vect., rad */
int				v2_isequal(t_vec2 a, t_vec2 b); /* (a == b) ? 1 : 0 */
int				v2_isnull(t_vec2 v); /* (v == 0) ? 1 : 0 */
REAL			v2_len(t_vec2 v); /* get length of vector */
t_vec2			v2_negate(t_vec2 v); /* change direction to opposite (v = -v) */
t_vec2			v2_new_null(void); /* initialize vector with value 0 */
t_vec2			v2_new_val(REAL x, REAL y); /* initialize vect. with value !0 */
t_vec2			v2_norm(t_vec2 v); /* normalize vector (len(v) = 1) */
t_vec2			v2_reflect(t_vec2 v, t_vec2 normal); /* get reflected vector */
REAL			v2_reflectance(t_vec2 v, t_vec2 normal, REAL k1, REAL k2); /* get reflectance of a surface */
t_vec2			v2_refract(t_vec2 v, t_vec2 n, REAL k1, REAL k2); /* get refracted vector */
void			v2_rotate(t_vec2 *v, REAL degrees); /* rotate vector */
t_vec2			v2_sub(t_vec2 a, t_vec2 b); /* substract b from a (a - b) */
t_vec2			v2_to_len(t_vec2 v, REAL new_len); /* set vector length */
t_vec2			v2_x_num(t_vec2 v, REAL n); /* multiply vector by a scalar */
t_vec2			v2_x_v2(t_vec2 a, t_vec2 b); /* (a.x * b.x, a.y * b.y) */

/*
** 3d vectors
*/

t_vec3			v3_a_to_b(t_vec3 a, t_vec3 b); /* vector form a to b  (b - a) */
t_vec3			v3_add(t_vec3 a, t_vec3 b); /* summ (a + b) */
REAL			v3_angle_deg(t_vec3 a, t_vec3 b); /* angle between vect., deg */
REAL			v3_angle_rad(t_vec3 a, t_vec3 b); /* angle between vect., rad */
t_vec3			v3_cross(t_vec3 a, t_vec3 b); /* cross product (a x b) */
REAL			v3_distance(t_vec3 a, t_vec3 b); /* length of (a - b) */
REAL			v3_dot(t_vec3 a, t_vec3 b); /* dot product (a * b) */
int				v3_isequal(t_vec3 a, t_vec3 b); /* (a == b) ? 1 : 0 */
int				v3_isnull(t_vec3 a); /* (a == 0) ? 1 : 0 */
REAL			v3_len(t_vec3 v); /* get length of vector */
t_vec3			v3_negate(t_vec3 v); /* change direction to opposite (v = -v) */
t_vec3			v3_new_null(void); /* initialize vector with value 0 */
t_vec3			v3_new_val(REAL x, REAL y, REAL z); /* initialize vect. with value !0 */
t_vec3			v3_norm(t_vec3 v); /* normalize vector (len(v) = 1) */
t_vec3			v3_reflect(t_vec3 v, t_vec3 n); /* get reflected vector */
REAL			v3_reflectance(t_vec3 v, t_vec3 n, REAL k1, REAL k2); /* get reflectance of a surface */
t_vec3			v3_refract(t_vec3 v, t_vec3 n, REAL k1, REAL k2); /* get refracted vector */
void			v3_rotate_xyz(t_vec3 *v, t_vec3 rotation); /* XYZ rotation */
void			v3_rotate_x(t_vec3 *v, REAL x); /* X rotation */
void			v3_rotate_y(t_vec3 *v, REAL y); /* Y rotation */
void			v3_rotate_z(t_vec3 *v, REAL z); /* Z rotation */
void			v3_rotate_zyx(t_vec3 *v, t_vec3 rotation); /* ZYX rotation */
t_vec3			v3_sub(t_vec3 a, t_vec3 b); /* substract b from a (a - b) */
t_vec3			v3_to_len(t_vec3 v, REAL new_len); /* set vector length */
t_vec3			v3_x_num(t_vec3 a, REAL n); /* multiply vector by a scalar */
t_vec3			v3_x_v3(t_vec3 a, t_vec3 b); /* (a.x * b.x, a.y * b.y, a.z * b.z) */

#endif
