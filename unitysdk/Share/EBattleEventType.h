#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleEventType_TypeDefinitionIndex = 17358;

	enum class EBattleEventType : ::System::Int16
	{
		Elite = 1,
		Normal = 0,
		Boss = 2,
	};
}
