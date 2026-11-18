#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDelayMoveMode_TypeDefinitionIndex = 85554;

	enum class CameraDelayMoveMode : ::System::Int32
	{
		HexOrbitDefault = 12,
		AimMode = 5,
		None = -1,
		MovementRotate = 2,
		AnyCamera = 99,
		OrbitDefault = 0,
		HexMovementRotate = 11,
		HighSpeedAttackDirect = 1,
		LockOnDirect = 4,
		DragDirect = 3,
		SwitchAvatar = 20,
		LowSpeedAttack = 25,
	};
}
