#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertActionSelectionType_TypeDefinitionIndex = 25152;

	enum class InsertActionSelectionType : ::System::Int32
	{
		Executing = 0,
		NextUnused = 1,
		ExecutingOrNextUnused = 2,
		AllUnused = 3,
		All = 4,
	};
}
