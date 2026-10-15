#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	class SortedDictionary_2_KeyValuePairComparer
	{
	public:
		::System::Collections::Generic::IComparer_1<T1>* keyComparer; // 0x0
	};
}
