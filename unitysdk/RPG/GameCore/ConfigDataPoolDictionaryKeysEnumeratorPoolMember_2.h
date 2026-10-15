#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorPoolMember_2.h"

namespace RPG::GameCore
{
	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryKeysEnumeratorPoolMember_2
	{
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorPoolMember_2<T1, T2> _InnerEnumerator; // 0x0
	};
}
