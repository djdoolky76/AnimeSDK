#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class VoxelIrradianceCacheShadingPass : ::System::Int32
	{
		ShadingInDecodingPass = 0,
		ShadingInMainLightPass = 1,
		ShadingInSeparatePass = 2,
	};
}
