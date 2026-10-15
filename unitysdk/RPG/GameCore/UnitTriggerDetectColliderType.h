#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class UnitTriggerDetectColliderType : ::System::UInt16
	{
		None = 0,
		MainCollider = 1,
		HitBox = 2,
		MainColliderAndHitBox = 3,
	};
}
