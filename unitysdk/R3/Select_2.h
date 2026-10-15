#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int Select_2_TypeDefinitionIndex = 35943;

	template <typename T1, typename T2>
	class Select_2
	{
	public:
		::R3::Observable_1<T1>* _source_P; // 0x0
		::System::Func_2<T1, T2>* _selector_P; // 0x0
	};
}
