#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int WhereSelect_2_TypeDefinitionIndex = 35947;

	template <typename T1, typename T2>
	class WhereSelect_2
	{
	public:
		::R3::Observable* _source_P; // 0x0
		::System::Func_2<T1, T2>* _selector_P; // 0x0
		::System::Func_2<T1, ::System::Boolean>* _predicate_P; // 0x0
	};
}
