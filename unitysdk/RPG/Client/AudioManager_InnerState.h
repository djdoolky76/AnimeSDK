#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AudioManager_InnerState : ::System::Int32
	{
		Invalid = 0,
		Inited = 1,
		WillBeDisposed = 2,
	};
}
