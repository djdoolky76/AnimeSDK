#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCompletionSource_1_TypeDefinitionIndex = 916;

	template <typename T>
	class TaskCompletionSource_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task_1<T>* m_task; // 0x0
	};
}
