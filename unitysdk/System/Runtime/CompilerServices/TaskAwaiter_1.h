#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Threading::Tasks { class Task; }

namespace System::Runtime::CompilerServices
{
	template <typename T>
	struct alignas(8) TaskAwaiter_1
	{
		::System::Threading::Tasks::Task* m_task; // 0x0
	};
}
