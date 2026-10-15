#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class EnvWindReceiverMonoPlugin_WindDirectionUpdateMode : ::System::Int32
	{
		PerFrame = 0,
		OnEnableOnly = 1,
	};
}
