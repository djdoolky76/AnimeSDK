#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Buffer_1_TypeDefinitionIndex = 30806;

	template <typename T>
	class Buffer_1
	{
	public:
		::System::Int32 lastFrame; // 0x0
		::System::Collections::Generic::Queue_1<T>* q; // 0x0
	};
}
