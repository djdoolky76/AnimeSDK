#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneModifyFriction_ColliderType_TypeDefinitionIndex = 75045;

	enum class AnimatorZoneModifyFriction_ColliderType : ::System::Int32
	{
		HullCollider = 0,
		WallCollider = 1,
	};
}
