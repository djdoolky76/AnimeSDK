#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int GarbageFreeIterators_HashsetIterator_1_TypeDefinitionIndex = 7629;

	template <typename T>
	struct alignas(8) GarbageFreeIterators_HashsetIterator_1
	{
		::System::Boolean isNull; // 0x0
		::System::Collections::Generic::HashSet_1<T>* hashset; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
