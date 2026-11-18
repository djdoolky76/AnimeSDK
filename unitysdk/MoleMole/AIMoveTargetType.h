#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIMoveTargetType_TypeDefinitionIndex = 60312;

	enum class AIMoveTargetType : ::System::Int32
	{
		AnchorTarget = 1,
		Custom = 5,
		Self = 3,
		Camera = 6,
		LockTarget = 0,
		FloorPoint = 9,
		GroupPoint = 8,
		LocalAvatar = 2,
		SavePoint = 10,
		SelfBornPosition = 7,
		GuideTargetPosition = 4,
	};
}
