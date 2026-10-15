#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings
	{
		::System::Single TerrainLayerRiseScale; // 0x10
		::System::Single TerrainLayerMaskScale; // 0x14
		::System::Single TerrainLayerEdgeOffset; // 0x18
		::System::Single TerrainLayerHeightDeformScale; // 0x1C
		::System::Single TerrainLayerNormalDeformScale; // 0x20
	};
}
