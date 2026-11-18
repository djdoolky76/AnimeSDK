#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SerializableDictionary_2_TypeDefinitionIndex = 38050;

	template <typename T1, typename T2>
	class SerializableDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T1>* _keys; // 0x0
		::System::Collections::Generic::List_1<T2>* _values; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _dictionary; // 0x0
	};
}
