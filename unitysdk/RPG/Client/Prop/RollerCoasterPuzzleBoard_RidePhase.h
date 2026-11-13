#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RollerCoasterPuzzleBoard_RidePhase_TypeDefinitionIndex = 81562;

	enum class RollerCoasterPuzzleBoard_RidePhase : ::System::Int32
	{
		Idle = 0,
		Boarding = 1,
		Transition = 2,
		Riding = 3,
		Exiting = 4,
		Finished = 5,
	};
}
