#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	inline static constexpr unsigned int Select_3_TypeDefinitionIndex = 35945;

	template <typename T1, typename T2, typename T3>
	class Select_3
	{
	public:
		::R3::Observable* _source_P; // 0x0
		::System::Func_3<T1, T2, T3>* _selector_P; // 0x0
		T3 _state_P; // 0x0
	};
}
