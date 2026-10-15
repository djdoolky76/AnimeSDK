#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorUnmanaged_2.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryKeysEnumeratorUnmanaged_2_TypeDefinitionIndex = 10770;

	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryKeysEnumeratorUnmanaged_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorUnmanaged_2<T1, T2> _InnerEnumerator; // 0x0
	};
}
