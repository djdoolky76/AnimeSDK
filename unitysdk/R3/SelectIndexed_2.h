#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	inline static constexpr unsigned int SelectIndexed_2_TypeDefinitionIndex = 35949;

	template <typename T1, typename T2>
	class SelectIndexed_2
	{
	public:
		::R3::Observable_1<T1>* _source_P; // 0x0
		::System::Func_3<T1, ::System::Int32, T2>* _selector_P; // 0x0
	};
}
