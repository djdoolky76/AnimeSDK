#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailState_TypeDefinitionIndex = 17525;

	enum class EMailState : ::System::Byte
	{
		Read = 2,
		New = 0,
		Removed = 4,
		Awarded = 3,
		Old = 1,
	};
}
