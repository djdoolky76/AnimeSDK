#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int FreezedDictionary_2_TypeDefinitionIndex = 28086;

	template <typename T1, typename T2>
	class FreezedDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<T1, T2>* dictionary; // 0x0
	};
}
