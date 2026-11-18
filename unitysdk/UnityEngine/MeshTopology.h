#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MeshTopology_TypeDefinitionIndex = 5235;

	enum class MeshTopology : ::System::Int32
	{
		Triangles = 0,
		Quads = 2,
		Lines = 3,
		LineStrip = 4,
		Points = 5,
	};
}
