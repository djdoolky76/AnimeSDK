#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int DoubleKeyDictionary_3_TypeDefinitionIndex = 8010;

	template <typename T1, typename T2, typename T3>
	class DoubleKeyDictionary_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, ::System::Collections::Generic::Dictionary_2<T2, T3>*>* m_oItems; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
