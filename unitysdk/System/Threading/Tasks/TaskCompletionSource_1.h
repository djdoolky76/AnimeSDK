#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class Task; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCompletionSource_1_TypeDefinitionIndex = 916;

	template <typename T>
	class TaskCompletionSource_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* m_task; // 0x0
	};
}
