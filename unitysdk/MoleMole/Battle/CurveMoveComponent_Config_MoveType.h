#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveType_TypeDefinitionIndex = 74203;

	enum class CurveMoveComponent_Config_MoveType : ::System::Int32
	{
		Velocity = 0,
		MovePositionAndInstSetRotation = 4,
		KinematicVelocity = 1,
		MovePosition = 2,
		SetPosition = 3,
	};
}
