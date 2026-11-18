#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int DebugView_TypeDefinitionIndex = 26454;

	enum class DebugView : ::System::Int32
	{
		RawBloom = 1,
		Glare = 6,
		Bloom = 4,
		LensFlare = 5,
		Composite = 7,
		None = 0,
		RawGlare = 3,
		RawLensFlare = 2,
	};
}
