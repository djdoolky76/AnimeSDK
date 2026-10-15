#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_3_TypeDefinitionIndex = 35933;

	template <typename T1, typename T2, typename T3>
	class CombineLatest_3
	{
	public:
		::R3::Observable_1<T1>* _source1_P; // 0x0
		::R3::Observable_1<T2>* _source2_P; // 0x0
		::System::Func_3<T1, T2, T3>* _resultSelector_P; // 0x0
	};
}
