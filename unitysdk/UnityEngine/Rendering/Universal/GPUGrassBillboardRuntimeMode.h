#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardRuntimeMode_TypeDefinitionIndex = 26640;

	enum class GPUGrassBillboardRuntimeMode : ::System::Int32
	{
		ProxyBillboard = 0,
		MergedMesh = 1,
		BothForDebug = 2,
	};
}
