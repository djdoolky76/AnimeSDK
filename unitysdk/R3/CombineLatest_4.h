#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_4_TypeDefinitionIndex = 35936;

	template <typename T1, typename T2, typename T3, typename T4>
	class CombineLatest_4
	{
	public:
		::R3::Observable* _source1_P; // 0x0
		::R3::Observable* _source2_P; // 0x0
		::R3::Observable* _source3_P; // 0x0
		::System::Func_4<T1, T2, T3, T4>* _resultSelector_P; // 0x0
	};
}
