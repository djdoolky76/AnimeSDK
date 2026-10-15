#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas
{
	inline static constexpr unsigned int GroupEvent_TypeDefinitionIndex = 10028;

	enum class GroupEvent : ::System::Byte
	{
		Added = 0,
		Removed = 1,
		AddedOrRemoved = 2,
	};
}
