#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ResultValue_TypeDefinitionIndex = 68074;

	struct alignas(4) MissionModule_ResultValue
	{
		::System::UInt32 MissionResultValue; // 0x10
	};
}
