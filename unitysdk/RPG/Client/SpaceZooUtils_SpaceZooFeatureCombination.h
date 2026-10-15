#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) SpaceZooUtils_SpaceZooFeatureCombination
	{
		::System::UInt32 BodyDecalFeatureID; // 0x10
		::System::UInt32 BodyColorFeatureID; // 0x14
		::System::UInt32 HatColorFeatureID; // 0x18
	};
}
