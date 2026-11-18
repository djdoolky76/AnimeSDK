#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AimIKLockTargetType_TypeDefinitionIndex = 76981;

	enum class AimIKLockTargetType : ::System::Int32
	{
		CustomPosRot = 1,
		CrossHair = 3,
		Self = 2,
		Target = 0,
	};
}
