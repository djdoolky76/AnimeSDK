#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo_TechTreeUpdateData_TypeDefinitionIndex = 75404;

	struct alignas(4) IdleLiveTechTreeInfo_TechTreeUpdateData
	{
		::System::Boolean IsActivate; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 NodeId; // 0x14
	};
}
