#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDPFDGLCPKB.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FGroupChallengeEndArgs_TypeDefinitionIndex = 83565;

	struct alignas(4) FGroupChallengeEndArgs
	{
		::System::Int32 ChallengeID; // 0x10
		::DDPFDGLCPKB Flags; // 0x14
		::System::Boolean IsSuccess; // 0x18
	};
}
