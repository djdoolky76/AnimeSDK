#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_State_TypeDefinitionIndex = 46789;

	enum class SummerEventDroneSubsystem_State : ::System::Int32
	{
		Pending = 0,
		Finish = 2,
		Idle = 3,
		Running = 1,
	};
}
