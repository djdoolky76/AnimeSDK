#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcher_DispatchContext_TypeDefinitionIndex = 5874;

	struct alignas(8) EventDispatcher_DispatchContext
	{
		::System::UInt32 m_GateCount; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Queue_1<::System::Object*>* m_Queue; // 0x18
	};
}
