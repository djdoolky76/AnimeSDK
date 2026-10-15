#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	class SortedDictionary_2_KeyCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<T1, T2>* _dictionary; // 0x0
	};
}
