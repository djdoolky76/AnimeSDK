#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorPoolMember_2.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryValuesEnumeratorPoolMember_2_TypeDefinitionIndex = 10779;

	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryValuesEnumeratorPoolMember_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorPoolMember_2<T1, T2> _InnerEnumerator; // 0x0
	};
}
