#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardSourceMaterialSwitchStage_TypeDefinitionIndex = 27076;

	enum class GPUGrassBillboardSourceMaterialSwitchStage : ::System::Int32
	{
		LOD0 = 0,
		LOD2 = 2,
		DistanceCulled = 3,
		LOD1 = 1,
	};
}
