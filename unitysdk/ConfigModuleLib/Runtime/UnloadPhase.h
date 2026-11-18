#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int UnloadPhase_TypeDefinitionIndex = 8323;

	enum class UnloadPhase : ::System::Int32
	{
		GameInsUnLoad = 4,
		ChessboardUnLoad = 2,
		Never = 0,
	};
}
