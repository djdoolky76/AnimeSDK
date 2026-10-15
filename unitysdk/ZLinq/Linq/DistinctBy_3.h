#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Internal { template <typename T> class HashSetSlim_1; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2, typename T3>
	struct alignas(8) DistinctBy_3
	{
		::System::Func_2<T1, T2>* _keySelector_P; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* _comparer_P; // 0x0
		T3 source; // 0x0
		::ZLinq::Internal::HashSetSlim_1<T2>* set; // 0x0
	};
}
