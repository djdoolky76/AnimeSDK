#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD268B0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD26780)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_CompleteOnInvokePromise_TypeDefinitionIndex = 931;

	class TaskFactory_CompleteOnInvokePromise
	{
	public:
		::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* _tasks; // 0x50
		::System::Int32 m_firstTaskAlreadyCompleted; // 0x58

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE__CTOR_OFFSET))(this, tasks);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* completingTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE_INVOKE_OFFSET))(this, completingTask);
		}
	};
}
