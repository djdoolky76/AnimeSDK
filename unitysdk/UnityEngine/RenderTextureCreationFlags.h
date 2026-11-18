#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureCreationFlags_TypeDefinitionIndex = 5246;

	enum class RenderTextureCreationFlags : ::System::Int32
	{
		MipMap = 1,
		AutoGenerateMips = 2,
		SRGB = 4,
		EyeTexture = 8,
		EnableRandomWrite = 16,
		CreatedFromScript = 32,
		AllowVerticalFlip = 128,
		NoResolvedColorSurface = 256,
		DynamicallyScalable = 1024,
		BindMS = 2048,
		LossyCompression = 16384,
		FastClear = 32768,
		AutoApplyDynamicScale = 65536,
		UniformGridSamplePattern = 131072,
		DCC = 262144,
		TC = 524288,
		NoRTV = 1048576,
		DepthWithoutHTile = 2097152,
		PrivateStorage = 4194304,
		DynamicCache = 8388608,
	};
}
