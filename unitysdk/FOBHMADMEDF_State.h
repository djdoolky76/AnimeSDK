#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FOBHMADMEDF_State_TypeDefinitionIndex = 60734;

	enum class FOBHMADMEDF_State : ::System::Int32
	{
		Idle = 0,
		Covering = 1,
		WaitUI3DLoad = 2,
		WaitCoverExit = 3,
		Tail = 4,
	};
