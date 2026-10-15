#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class StateInfoIndex : ::System::Int32
	{
		CurrentState = 0,
		NextState = 1,
		ExitState = 2,
		InterruptedState = 3,
	};
}
