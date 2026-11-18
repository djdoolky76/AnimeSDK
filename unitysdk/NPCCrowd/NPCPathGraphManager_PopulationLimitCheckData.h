#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_PopulationLimitCheckData_TypeDefinitionIndex = 71330;

	struct alignas(4) NPCPathGraphManager_PopulationLimitCheckData
	{
		::System::Boolean UsePopulationWeightLimit; // 0x10
		::System::Boolean PopulationCountValid; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 NodeLoadMax; // 0x14
	};
}
