#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Linq { template <typename T> class OrderedEnumerable_1; }

namespace System::Linq
{
	template <typename T1, typename T2>
	class OrderedEnumerable_2
	{
	public:
		::System::Linq::OrderedEnumerable_1<T1>* parent; // 0x0
		::System::Func_2<T1, T2>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* comparer; // 0x0
		::System::Boolean descending; // 0x0
	};
}
