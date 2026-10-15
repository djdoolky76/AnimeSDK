#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) ArtNPCPedestrianAssetConfig_MeshLodInfo
	{
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
	};
}
