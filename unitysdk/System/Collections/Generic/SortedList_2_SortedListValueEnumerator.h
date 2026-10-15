#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedList_2_SortedListValueEnumerator_TypeDefinitionIndex = 3037;

	template <typename T1, typename T2>
	class SortedList_2_SortedListValueEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<T1, T2>* _sortedList; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T2 _currentValue; // 0x0
	};
}
