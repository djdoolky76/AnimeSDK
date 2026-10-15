#pragma once
#include "unitysdk/unitysdk.h"
	enum class FOBHMADMEDF_State : ::System::Int32
	{
		Idle = 0,
		Covering = 1,
		WaitUI3DLoad = 2,
		WaitCoverExit = 3,
		Tail = 4,
	};
