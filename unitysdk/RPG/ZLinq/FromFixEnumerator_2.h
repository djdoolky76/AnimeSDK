#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"

namespace RPG::ZLinq
{
	inline static constexpr unsigned int FromFixEnumerator_2_TypeDefinitionIndex = 10360;

	template <typename T1, typename T2>
	struct alignas(8) FromFixEnumerator_2
	{
		::RPG::GameCore::FixEnumerator_2<T1, T2> _Enumerator; // 0x0
	};
}
