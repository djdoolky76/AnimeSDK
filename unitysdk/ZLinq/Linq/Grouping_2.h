#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ZLinq::Linq { template <typename T1, typename T2> class Grouping_2; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2>
	class Grouping_2 : public ::System::Object
	{
	public:
		T1 key; // 0x0
		::System::UInt32 hashCode; // 0x0
		::Il2CppArray<T2>* elements; // 0x0
		::System::Int32 count; // 0x0
		::ZLinq::Linq::Grouping_2<T2, T2>* NextGroupInAddOrder; // 0x0
		::ZLinq::Linq::Grouping_2<T2, T2>* NextGroupInSameHashCode; // 0x0
	};
}
