#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int Where_1_TypeDefinitionIndex = 35958;

	template <typename T>
	class Where_1
	{
	public:
		::R3::Observable* source; // 0x0
		::System::Func_2<T, ::System::Boolean>* predicate; // 0x0
	};
}
