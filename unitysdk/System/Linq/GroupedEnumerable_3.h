#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Linq
{
	template <typename T1, typename T2, typename T3>
	class GroupedEnumerable_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, T2>* keySelector; // 0x0
		::System::Func_2<T1, T3>* elementSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* comparer; // 0x0
	};
}
