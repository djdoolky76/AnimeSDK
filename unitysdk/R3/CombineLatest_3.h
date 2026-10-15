#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	template <typename T1, typename T2, typename T3>
	class CombineLatest_3
	{
	public:
		::R3::Observable* _source1_P; // 0x0
		::R3::Observable* _source2_P; // 0x0
		::System::Func_3<T1, T2, T3>* _resultSelector_P; // 0x0
	};
}
