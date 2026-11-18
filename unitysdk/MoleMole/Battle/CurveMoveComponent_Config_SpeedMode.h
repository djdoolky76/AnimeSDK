#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_SpeedMode_TypeDefinitionIndex = 74202;

	enum class CurveMoveComponent_Config_SpeedMode : ::System::Int32
	{
		Acceleration = 1,
		Curve = 2,
		Teleport = 3,
		FixedSpeed = 0,
		ResetPos = 4,
	};
}
