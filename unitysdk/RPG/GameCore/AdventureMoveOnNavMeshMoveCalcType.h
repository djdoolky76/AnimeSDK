#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureMoveOnNavMeshMoveCalcType : ::System::Int32
	{
		None = 0,
		Duration = 1,
		Speed = 2,
	};
}
