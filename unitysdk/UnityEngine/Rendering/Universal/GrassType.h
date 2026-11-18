#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GrassType_TypeDefinitionIndex = 26397;

	enum class GrassType : ::System::Int32
	{
		MeshGrass = 0,
		BillboardGrass = 1,
	};
}
