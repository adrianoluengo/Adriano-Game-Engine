#version 450

vec2 position[3] = vec2[] {
	vec2[0,-0.5]
	vec2[0.5,0.5]
	vec2[-0.5,0.5]
};
void main(){
	gl_Position = vec2(positions[gl_Vertex_Index], 0.0, 1.0);
}