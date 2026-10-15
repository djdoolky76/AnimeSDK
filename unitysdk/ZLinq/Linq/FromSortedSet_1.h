#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromSortedSet_1_TypeDefinitionIndex = 6114;

	template <typename T>
	struct alignas(8) FromSortedSet_1
	{
		::System::Collections::Generic::SortedSet_1<T>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
