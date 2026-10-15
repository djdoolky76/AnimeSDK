#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class TaskScheduler; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1_TypeDefinitionIndex = 891;

	template <typename T>
	class TaskFactory_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken m_defaultCancellationToken; // 0x0
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x0
		::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions; // 0x0
	};
}
