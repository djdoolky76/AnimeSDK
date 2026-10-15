#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class SceneItemHLODStreamingLayer_1_HLODProxyState : ::System::Int32
	{
		None = 0,
		PendingOrLoading = 1,
		Fading = 2,
		Ready = 3,
	};
}
