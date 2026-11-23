#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ABC::Collections::Generic { template <typename T> class SortedSet_1; }

namespace ABC::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_TypeDefinitionIndex = 19666;

	template <typename T1, typename T2>
	class SortedDictionary_2 : public ::System::Object
	{
	public:
		::System::Object* _keys; // 0x0
		::System::Object* _values; // 0x0
		::ABC::Collections::Generic::SortedSet_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* _set; // 0x0
	};
}
