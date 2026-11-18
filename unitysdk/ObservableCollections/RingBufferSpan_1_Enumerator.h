#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBufferSpan_1_Enumerator_TypeDefinitionIndex = 28138;

	template <typename T>
	struct alignas(8) RingBufferSpan_1_Enumerator
	{
		::System::Object* firstEnumerator; // 0x0
		::System::Object* secondEnumerator; // 0x0
		::System::Boolean useFirst; // 0x0
	};
}
