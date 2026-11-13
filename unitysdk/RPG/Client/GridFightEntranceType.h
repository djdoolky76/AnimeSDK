#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEntranceType_TypeDefinitionIndex = 66432;

	enum class GridFightEntranceType : ::System::Int32
	{
		Legacy = 0,
		Latest = 1,
	};
}
