#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }

namespace R3
{
	inline static constexpr unsigned int Take_1_TypeDefinitionIndex = 35956;

	template <typename T>
	class Take_1
	{
	public:
		::R3::Observable* _source_P; // 0x0
		::System::Int32 _count_P; // 0x0
	};
}
