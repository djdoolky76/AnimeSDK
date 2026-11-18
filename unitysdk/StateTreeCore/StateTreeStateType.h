#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateType_TypeDefinitionIndex = 31120;

	enum class StateTreeStateType : ::System::Byte
	{
		State = 0,
		Group = 1,
		Linked = 2,
		LinkedAsset = 3,
		Subtree = 4,
	};
}
