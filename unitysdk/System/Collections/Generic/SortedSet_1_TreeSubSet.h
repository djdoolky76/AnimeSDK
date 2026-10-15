#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

namespace System::Collections::Generic
{
	template <typename T>
	class SortedSet_1_TreeSubSet
	{
	public:
		::System::Collections::Generic::SortedSet_1<T>* _underlying; // 0x0
		T _min; // 0x0
		T _max; // 0x0
		::System::Boolean _lBoundActive; // 0x0
		::System::Boolean _uBoundActive; // 0x0
	};
}
