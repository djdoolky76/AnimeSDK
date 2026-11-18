#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadPhase_TypeDefinitionIndex = 8601;

	enum class LoadPhase : ::System::Int32
	{
		None = 0,
		GameInsLoad_Safe = 8,
		ChessboardLoad = 2,
		LoginLoading = 1,
		GameInsLoad_Battle = 4,
	};
}
