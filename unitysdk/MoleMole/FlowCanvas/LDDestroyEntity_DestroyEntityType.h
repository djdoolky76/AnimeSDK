#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDDestroyEntity_DestroyEntityType_TypeDefinitionIndex = 41931;

	enum class LDDestroyEntity_DestroyEntityType : ::System::Int32
	{
		Avatar = 1,
		Monster = 2,
		Bullet = 14,
		SceneObject = 26,
	};
}
