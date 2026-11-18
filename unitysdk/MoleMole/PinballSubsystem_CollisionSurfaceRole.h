#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_CollisionSurfaceRole_TypeDefinitionIndex = 56733;

	enum class PinballSubsystem_CollisionSurfaceRole : ::System::Int32
	{
		Generic = 0,
		PaddleEnd = 2,
		PaddleBody = 1,
	};
}
