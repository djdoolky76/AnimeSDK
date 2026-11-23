#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ABC::Collections
{
	inline static constexpr unsigned int SerializableDictionary_4_TypeDefinitionIndex = 6231;

	template <typename T1, typename T2, typename T3, typename T4>
	class SerializableDictionary_4
	{
	public:
		::System::Collections::Generic::List_1<T1>* m_Keys; // 0x0
		::System::Collections::Generic::List_1<T2>* m_Values; // 0x0
	};
}
