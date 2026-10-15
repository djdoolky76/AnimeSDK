#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class VCameraConfigType : ::System::Int32
	{
		NormalConfig = 0,
		Freelook3rdConfig = 1,
		ShotAnimMovementConfig = 2,
		CloseupShotConfig = 3,
		ShakeConfig = 4,
		StateAdditiveNormalConfig = 5,
	};
}
