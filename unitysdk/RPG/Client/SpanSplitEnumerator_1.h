#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int SpanSplitEnumerator_1_TypeDefinitionIndex = 6572;

	template <typename T>
	struct alignas(8) SpanSplitEnumerator_1
	{
		::System::Int32 _nextStartIndex; // 0x0
		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<T> _separator; // 0x0
		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<T> _source; // 0x0
		::System::Object* _current; // 0x0
	};
}
