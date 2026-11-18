#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationTwoBoneIKFlag_TypeDefinitionIndex = 40383;

	enum class AnimationTwoBoneIKFlag : ::System::Byte
	{
		TakeRotationFromEffector = 4,
		MaintainEffectorRelativeRotation = 2,
		AllowStretching = 1,
		None = 0,
	};
}
