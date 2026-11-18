#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_MonitorMode_TypeDefinitionIndex = 29847;

	enum class Monitor_MonitorMode : ::System::Int32
	{
		AnyStatus = 10,
		Success = 1,
		Failure = 0,
	};
}
