#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }

namespace R3
{
	inline static constexpr unsigned int AppendPrepend_1_TypeDefinitionIndex = 35931;

	template <typename T>
	class AppendPrepend_1
	{
	public:
		::R3::Observable_1<T>* _source_P; // 0x0
		T _value_P; // 0x0
		::System::Boolean _append_P; // 0x0
	};
}
