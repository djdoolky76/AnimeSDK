#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int FNPCCrowdLodCommand_TypeDefinitionIndex = 84899;

	struct alignas(4) FNPCCrowdLodCommand
	{
		::System::Int32 CrowdIndex; // 0x10
	};
}
