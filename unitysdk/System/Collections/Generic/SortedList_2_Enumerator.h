#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	struct alignas(8) SortedList_2_Enumerator
	{
		::System::Collections::Generic::SortedList_2<T1, T2>* _sortedList; // 0x0
		T2 _key; // 0x0
		T2 _value; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
	};
}
