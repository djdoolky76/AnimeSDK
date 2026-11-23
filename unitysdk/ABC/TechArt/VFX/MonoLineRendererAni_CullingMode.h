#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoLineRendererAni_CullingMode_TypeDefinitionIndex = 16269;

	enum class MonoLineRendererAni_CullingMode : ::System::Int32
	{
		Pause = 0,
		AlwaysUpdate = 1,
		OnlyFirstUpdate = 2,
	};
}
