#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2.h"

namespace RPG::GameCore
{
	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryKeysEnumeratorKeyValuePoolMember_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2<T1, T2> _InnerEnumerator; // 0x0
	};
}
