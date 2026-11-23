#pragma once
#include "unitysdk/unitysdk.h"

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int PlatformType_TypeDefinitionIndex = 16071;

	enum class PlatformType : ::System::Int32
	{
		Editor = 0,
		PC = 1,
		Mobile = 2,
	};
}
