#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ValueTask_1_TypeDefinitionIndex = 869;

	template <typename T>
	struct alignas(8) ValueTask_1
	{
		::System::Threading::Tasks::Task_1<T>* _task; // 0x0
		T _result; // 0x0
	};
}
