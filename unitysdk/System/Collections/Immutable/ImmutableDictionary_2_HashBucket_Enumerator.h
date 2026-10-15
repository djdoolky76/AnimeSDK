#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_HashBucket_Enumerator_TypeDefinitionIndex = 6625;

	template <typename T1, typename T2>
	struct alignas(8) ImmutableDictionary_2_HashBucket_Enumerator
	{
		::System::Object* _bucket; // 0x0
		::System::Object* _currentPosition; // 0x0
		::System::Object* _additionalEnumerator; // 0x0
	};
}
