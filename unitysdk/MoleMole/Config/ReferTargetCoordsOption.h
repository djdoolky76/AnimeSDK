#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReferTargetCoordsOption_TypeDefinitionIndex = 66262;

	enum class ReferTargetCoordsOption : ::System::Int32
	{
		PlayerJoyStick = 9,
		EntityJoystic = 10,
		Self = 0,
		View = 8,
		Unknown = -1,
		Buddy = 5,
		Relative = 2,
		Target = 1,
		Caster = 6,
		AimTargetPoint = 11,
		LocalAvatar = 3,
		ReferTarget = 7,
		Camera = 4,
	};
}
