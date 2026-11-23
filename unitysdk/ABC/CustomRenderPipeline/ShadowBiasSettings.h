#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ShadowBiasSettings_TypeDefinitionIndex = 16559;

	struct alignas(4) ShadowBiasSettings
	{
		::System::Single materialDepthBias; // 0x10
		::System::Single materialNormalBias; // 0x14
		::System::Single globalDepthBias; // 0x18
		::System::Single globalSlopeBias; // 0x1C
	};
}
