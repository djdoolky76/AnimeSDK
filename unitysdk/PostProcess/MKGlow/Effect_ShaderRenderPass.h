#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_ShaderRenderPass_TypeDefinitionIndex = 26493;

	enum class Effect_ShaderRenderPass : ::System::Int32
	{
		Debug = 4,
		Composite = 3,
		Downsample = 1,
		Presample = 0,
		Upsample = 2,
	};
}
