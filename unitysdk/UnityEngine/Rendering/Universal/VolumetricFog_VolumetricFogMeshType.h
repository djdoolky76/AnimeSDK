#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFog_VolumetricFogMeshType_TypeDefinitionIndex = 27020;

	enum class VolumetricFog_VolumetricFogMeshType : ::System::Int32
	{
		CeilWindow = 0,
		Cube = 2,
		WallWindow = 1,
	};
}
