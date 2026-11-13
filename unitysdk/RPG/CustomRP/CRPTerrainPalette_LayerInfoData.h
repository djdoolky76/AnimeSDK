#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainPalette_LayerInfoData_TypeDefinitionIndex = 38655;

	struct alignas(4) CRPTerrainPalette_LayerInfoData
	{
		::System::UInt32 scaleOffset; // 0x10
		::System::UInt32 normalMetallicSmoothness; // 0x14
	};
}
