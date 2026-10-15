#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureMoveOnNavMeshFaceToType : ::System::Int32
	{
		None = 0,
		FaceToTarget = 1,
		FaceToMoveDir = 2,
	};
}
