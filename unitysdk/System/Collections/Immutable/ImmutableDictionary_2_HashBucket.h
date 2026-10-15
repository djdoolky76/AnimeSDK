#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_HashBucket_TypeDefinitionIndex = 6624;

	template <typename T1, typename T2>
	struct alignas(8) ImmutableDictionary_2_HashBucket
	{
		::System::Collections::Generic::KeyValuePair_2<T1, T2> _firstValue; // 0x0
		::System::Object* _additionalElements; // 0x0
	};
}
