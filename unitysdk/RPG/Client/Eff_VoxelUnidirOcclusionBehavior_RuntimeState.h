#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class Eff_VoxelUnidirOcclusionBehavior_RuntimeState : ::System::Int32
	{
		Suppressed = 0,
		Active = 1,
		Building = 2,
	};
}
