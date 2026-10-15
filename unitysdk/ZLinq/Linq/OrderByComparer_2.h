#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace ZLinq::Linq { class IOrderByComparer; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2>
	class OrderByComparer_2 : public ::System::Object
	{
	public:
		::Il2CppArray<T1>* keys; // 0x0
		::System::Collections::Generic::IComparer_1<T1>* comparer; // 0x0
		::ZLinq::Linq::IOrderByComparer* childComparer; // 0x0
		::System::Boolean descending; // 0x0
	};
}
