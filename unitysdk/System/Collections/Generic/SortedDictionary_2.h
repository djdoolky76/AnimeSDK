#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class TreeSet_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_TypeDefinitionIndex = 3018;

	template <typename T1, typename T2>
	class SortedDictionary_2 : public ::System::Object
	{
	public:
		::System::Object* _keys; // 0x0
		::System::Object* _values; // 0x0
		::System::Collections::Generic::TreeSet_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* _set; // 0x0
	};
}
