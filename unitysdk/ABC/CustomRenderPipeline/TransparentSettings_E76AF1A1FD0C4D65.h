#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TransparentSettings_E76AF1A1FD0C4D65_TypeDefinitionIndex = 16882;

	enum class TransparentSettings_E76AF1A1FD0C4D65 : ::System::Int32
	{
		FullResolution = 0,
		HalfResolution = 1,
		HalfResolutionWithRawMSAA = 2,
		HalfResolutionWithResolvedMSAA = 3,
	};
}
