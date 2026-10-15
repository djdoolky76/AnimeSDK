#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	class SortedList_2_ValueList : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<T1, T2>* _dict; // 0x0
	};
}
