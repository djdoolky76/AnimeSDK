#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
namespace RPG::Client::RedDot { template <typename T> class RedDotState_1; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotCheckContext_1_TypeDefinitionIndex = 79155;

	template <typename T>
	struct alignas(8) RedDotCheckContext_1
	{
		::RPG::Client::RedDot::RedDotState_1<T>* State; // 0x0
		::RPG::GameCore::RedDotType RedDotType; // 0x0
	};
}
