#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RollerCoasterPuzzleBoard_InitializationPhase_TypeDefinitionIndex = 81562;

	enum class RollerCoasterPuzzleBoard_InitializationPhase : ::System::Int32
	{
		Empty = 0,
		Loading = 1,
		Ready = 2,
	};
}
