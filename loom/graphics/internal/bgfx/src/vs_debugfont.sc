$input a_position, a_color0, a_color1, a_texcoord0
$output v_color0, v_color1, v_texcoord0

/*
 * Copyright 2011-2013 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#include "bgfx_shader.sh"

void main()
{
	gl_Position = mul(u_modelViewProj, vec4(a_position, 1.0) );
	v_texcoord0 = a_texcoord0;
	v_color0 = a_color0;
	v_color1 = a_color1;
}
