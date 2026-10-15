#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class SessionMode : ::System::Int32
	{
		Socket = 0,
		Pipe = 1,
		SharedMemory = 2,
	};
}
