#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class Grouping_2; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2>
	struct alignas(8) LookupBuilder_2
	{
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::Il2CppArray<::ZLinq::Linq::Grouping_2<T1, T2>*>* buckets; // 0x0
		::System::Int32 bucketsLength; // 0x0
		::ZLinq::Linq::Grouping_2<T1, T2>* last; // 0x0
		::System::Int32 groupCount; // 0x0
	};
}
