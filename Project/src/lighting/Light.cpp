#include "lighting/Light.h"

Light::Light(glm::vec3 a, glm::vec3 d, glm::vec3 s, std::shared_ptr<Object> mesh, LightType type)
	: ambient(a), diffuse(d), specular(s), mesh(mesh), type(type)
{

}