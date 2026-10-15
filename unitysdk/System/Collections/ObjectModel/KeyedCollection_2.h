#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int KeyedCollection_2_TypeDefinitionIndex = 1506;

	template <typename T1, typename T2>
	class KeyedCollection_2
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* dict; // 0x0
		::System::Int32 keyCount; // 0x0
		::System::Int32 threshold; // 0x0
	};
}
