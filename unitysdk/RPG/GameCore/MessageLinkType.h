#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkType_TypeDefinitionIndex = 14625;

	enum class MessageLinkType : ::System::Int32
	{
		None = 0,
		Exit = 1,
	};
}
