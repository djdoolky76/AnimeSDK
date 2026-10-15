#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace R3
{
	inline static constexpr unsigned int DistinctUntilChanged_1_TypeDefinitionIndex = 35939;

	template <typename T>
	class DistinctUntilChanged_1
	{
	public:
		::R3::Observable_1<T>* _source_P; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer_P; // 0x0
	};
}
