#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Threading::Tasks { class Task; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter_TypeDefinitionIndex = 1374;

	template <typename T>
	struct alignas(8) ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter
	{
		::System::Threading::Tasks::Task* m_task; // 0x0
		::System::Boolean m_continueOnCapturedContext; // 0x0
	};
}
