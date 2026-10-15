#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ComponentAssetLoader_AssetSyncResult : ::System::Int32
	{
		None = 0,
		NeedRefreshAnimator = 1,
		DataDirty = 2,
	};
}
