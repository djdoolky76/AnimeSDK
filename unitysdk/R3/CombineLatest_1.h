#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_1_TypeDefinitionIndex = 35907;

	template <typename T>
	class CombineLatest_1
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::R3::Observable_1<T>*>* _sources_P; // 0x0
	};
}
