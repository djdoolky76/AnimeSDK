#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"

namespace RPG::ZLinq
{
	inline static constexpr unsigned int FromAdapterEnumerator_2_TypeDefinitionIndex = 10358;

	template <typename T1, typename T2>
	struct alignas(8) FromAdapterEnumerator_2
	{
		::RPG::GameCore::AdapterEnumerator_2<T1, T2> _Enumerator; // 0x0
	};
}
