#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityOverReason_TypeDefinitionIndex = 38808;

	enum class SceneAssetDensityOverReason : ::System::Int32
	{
		LIGHT = 512,
		VERTEX = 8,
		PARTICLE = 16,
		TEXTURE = 2,
		SKINNED_MESH = 64,
		OBJECT = 256,
		ANIMATION_CLIP = 32,
		NONE = 0,
		MATERIAL = 4,
		TEXTURE_BITS = 1,
		RENDERER = 128,
	};
}
