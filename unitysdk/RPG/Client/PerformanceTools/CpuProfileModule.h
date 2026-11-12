#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PerformanceTools
{
	inline static constexpr unsigned int CpuProfileModule_TypeDefinitionIndex = 76180;

	enum class CpuProfileModule : ::System::Int32
	{
		None = 0,
		GameLogic = 1,
		Rendering = 2,
		Animation = 4,
		VFX = 8,
		UI = 16,
		Physics = 32,
		Optimization = 64,
		Normal = 63,
		All = 127,
	};
}
