#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observer_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	template <typename T1, typename T2>
	class SelectIndexed_2__Select
	{
	public:
		::R3::Observer_1<T1>* _observer_P; // 0x0
		::System::Func_3<T2, ::System::Int32, T1>* _selector_P; // 0x0
		::System::Int32 index; // 0x0
	};
}
