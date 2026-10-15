#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class VoxelIrradianceCacheShadingFallback : ::System::Int32
	{
		FallbackInDecodingPass = 0,
		FallbackInSeparatePass = 1,
	};
}
