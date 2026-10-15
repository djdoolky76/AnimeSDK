#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	struct alignas(4) CRPTerrainPalette_LayerInfoData
	{
		::System::UInt32 scaleOffset; // 0x10
		::System::UInt32 normalMetallicSmoothness; // 0x14
	};
}
