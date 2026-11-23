#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoLineRendererAni_DynamicCenterUpdateMode_TypeDefinitionIndex = 16270;

	enum class MonoLineRendererAni_DynamicCenterUpdateMode : ::System::Int32
	{
		AlwaysUpdate = 0,
		OnlyFirstUpdate = 1,
	};
}
