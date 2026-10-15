#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorKeyPoolMember_2.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryKeysEnumeratorKeyPoolMember_2_TypeDefinitionIndex = 10785;

	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryKeysEnumeratorKeyPoolMember_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorKeyPoolMember_2<T1, T2> _InnerEnumerator; // 0x0
	};
}
