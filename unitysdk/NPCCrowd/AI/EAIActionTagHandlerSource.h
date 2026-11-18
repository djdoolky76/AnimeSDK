#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAIActionTagHandlerSource_TypeDefinitionIndex = 54639;

	enum class EAIActionTagHandlerSource : ::System::Byte
	{
		PathMask = 1,
		TagAction = 2,
		Unknown = 0,
	};
}
