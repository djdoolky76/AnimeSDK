#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TaskAwaiter_1_TypeDefinitionIndex = 1370;

	template <typename T>
	struct alignas(8) TaskAwaiter_1
	{
		::System::Threading::Tasks::Task_1<T>* m_task; // 0x0
	};
}
