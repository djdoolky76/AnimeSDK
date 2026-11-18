#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_MaterialKeywords_TypeDefinitionIndex = 26491;

	enum class Effect_MaterialKeywords : ::System::Int32
	{
		DebugLensFlare = 7,
		RenderPriorityBalanced = 13,
		DebugRawLensFlare = 4,
		LensSurface = 1,
		RenderPriorityQuality = 11,
		LegacyBlit = 10,
		HQAntiFlickerFilter = 14,
		DebugRawGlare = 5,
		DebugRawBloom = 3,
		DebugBloom = 6,
		Bloom = 0,
		Natural = 12,
		LensFlare = 2,
		DebugGlare = 8,
		DebugComposite = 9,
	};
}
