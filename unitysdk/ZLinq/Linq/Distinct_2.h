#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Internal { template <typename T> class HashSetSlim_1; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2>
	struct alignas(8) Distinct_2
	{
		::System::Collections::Generic::IEqualityComparer_1<T1>* _comparer_P; // 0x0
		T2 source; // 0x0
		::ZLinq::Internal::HashSetSlim_1<T1>* set; // 0x0
	};
}
