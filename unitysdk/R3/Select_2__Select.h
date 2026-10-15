#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int Select_2__Select_TypeDefinitionIndex = 35944;

	template <typename T1, typename T2>
	class Select_2__Select
	{
	public:
		::R3::Observer_1<T1>* _observer_P; // 0x0
		::System::Func_2<T2, T1>* _selector_P; // 0x0
	};
}
