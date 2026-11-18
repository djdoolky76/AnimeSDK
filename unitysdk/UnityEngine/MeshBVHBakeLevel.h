#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MeshBVHBakeLevel_TypeDefinitionIndex = 5264;

	enum class MeshBVHBakeLevel : ::System::Int32
	{
		Disabled = 0,
		Opaque = 1,
		Masked = 2,
		Transparent = 3,
	};
}
