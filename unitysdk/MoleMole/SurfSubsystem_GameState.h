#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_GameState_TypeDefinitionIndex = 82093;

	enum class SurfSubsystem_GameState : ::System::Int32
	{
		Ready = 1,
		None = 0,
		Running = 2,
		Finish = 3,
	};
}
