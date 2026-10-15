#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { class Observable; }

namespace R3
{
	template <typename T>
	class AppendPrepend_1
	{
	public:
		::R3::Observable* _source_P; // 0x0
		T _value_P; // 0x0
		::System::Boolean _append_P; // 0x0
	};
}
