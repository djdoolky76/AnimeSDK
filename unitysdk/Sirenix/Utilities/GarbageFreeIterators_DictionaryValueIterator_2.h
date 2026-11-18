#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GarbageFreeIterators_DictionaryValueIterator_2_TypeDefinitionIndex = 6454;

	template <typename T1, typename T2>
	struct alignas(8) GarbageFreeIterators_DictionaryValueIterator_2
	{
		::System::Collections::Generic::Dictionary_2<T1, T2>* dictionary; // 0x0
		::System::Object* enumerator; // 0x0
		::System::Boolean isNull; // 0x0
	};
}
