#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameSynchorType_TypeDefinitionIndex = 54816;

	enum class FrameSynchorType : ::System::Int32
	{
		Offline = 0,
		Online = 1,
		Replay = 2,
	};
}
