#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/FF8E0A59D8DB0DF3.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Session_TypeDefinitionIndex = 17899;

	struct alignas(4) HAPI_Session
	{
		::FA78B0257AA80CDE::FF8E0A59D8DB0DF3 type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 id; // 0x18
	};
}
