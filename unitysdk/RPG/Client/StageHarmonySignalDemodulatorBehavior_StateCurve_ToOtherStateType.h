#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType : ::System::Int32
	{
		WaitCurrentStateFinished = 0,
		JumpToOtherStateImidiate = 1,
	};
}
