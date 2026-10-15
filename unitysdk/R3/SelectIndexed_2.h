#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	inline static constexpr unsigned int SelectIndexed_2_TypeDefinitionIndex = 35949;

	template <typename T1, typename T2>
	class SelectIndexed_2
	{
	public:
		::R3::Observable* _source_P; // 0x0
		::System::Func_3<T1, ::System::Int32, T2>* _selector_P; // 0x0
	};
}
