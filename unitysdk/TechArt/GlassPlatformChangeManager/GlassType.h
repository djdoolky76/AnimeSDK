#pragma once
#include "unitysdk/unitysdk.h"

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassType_TypeDefinitionIndex = 16237;

	enum class GlassType : ::System::Int32
	{
		Undefined = 0,
		Transparent = 1,
		Frosted = 2,
		Opaque = 3,
	};
}
