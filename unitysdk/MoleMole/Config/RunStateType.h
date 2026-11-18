#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RunStateType_TypeDefinitionIndex = 86894;

	enum class RunStateType : ::System::Int32
	{
		WalkLoop = 3,
		WalkEnd = 4,
		Unknown = 0,
		RunEnd = 2,
		RunLoop = 1,
	};
}
