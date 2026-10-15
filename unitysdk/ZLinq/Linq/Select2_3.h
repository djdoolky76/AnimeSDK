#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Select2_3_TypeDefinitionIndex = 6133;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) Select2_3
	{
		::System::Func_3<T1, ::System::Int32, T2>* _selector_P; // 0x0
		T3 source; // 0x0
		::System::Int32 index; // 0x0
	};
}
