#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Session_TypeDefinitionIndex = 40492;

	struct alignas(4) HAPI_Session
	{
		::HoudiniEngineUnity::HAPI_SessionType type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 id; // 0x18
	};
}
