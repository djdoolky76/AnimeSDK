#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromHashSet_1_TypeDefinitionIndex = 6113;

	template <typename T>
	struct alignas(8) FromHashSet_1
	{
		::System::Collections::Generic::HashSet_1<T>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
