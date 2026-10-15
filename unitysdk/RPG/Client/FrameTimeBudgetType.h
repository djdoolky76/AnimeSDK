#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FrameTimeBudgetType : ::System::Int32
	{
		Shared = 0,
		AssetMgr = 1,
		GameObjectPool = 2,
		GameObjectPoolPreReset = 3,
		StreamingUpdate = 4,
		StreamingLoad = 5,
		StreamingFading = 6,
		AdvAsyncProcessor = 7,
		GroupUnload = 8,
		BattlePreloadPoolRearrange = 9,
		ConfigDataPoolTick = 10,
		Count = 11,
	};
}
