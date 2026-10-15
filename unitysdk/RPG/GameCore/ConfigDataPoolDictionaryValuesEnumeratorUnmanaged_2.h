#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorUnmanaged_2.h"

namespace RPG::GameCore
{
	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryValuesEnumeratorUnmanaged_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorUnmanaged_2<T1, T2> _InnerEnumerator; // 0x0
	};
}
