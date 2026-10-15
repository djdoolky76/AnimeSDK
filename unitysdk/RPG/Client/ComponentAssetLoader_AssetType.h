#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ComponentAssetLoader_AssetType : ::System::Int32
	{
		None = 0,
		Material = 1,
		Mesh = 2,
		AniController = 3,
		GameObjEnable = 4,
		CompEnable = 5,
	};
}
