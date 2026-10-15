#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace UnityEngine::Rendering
{
	struct alignas(8) BatchPartTemplate
	{
		::UnityEngine::Mesh* skinmesh; // 0x10
		::UnityEngine::Material* material; // 0x18
	};
}
