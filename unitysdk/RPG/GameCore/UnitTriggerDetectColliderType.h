#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnitTriggerDetectColliderType_TypeDefinitionIndex = 17599;

	enum class UnitTriggerDetectColliderType : ::System::UInt16
	{
		None = 0,
		MainCollider = 1,
		HitBox = 2,
		MainColliderAndHitBox = 3,
	};
}
