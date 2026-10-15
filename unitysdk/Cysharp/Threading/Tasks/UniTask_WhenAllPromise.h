#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace Cysharp::Threading::Tasks { class UniTask_WhenAllPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F143C50)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F14C330)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14C3E0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F14C4E0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F14C1F0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14C490)

namespace Cysharp::Threading::Tasks
{
	class UniTask_WhenAllPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x10
		::System::Byte _padding0[0x18];
		::System::Int32 completeCount; // 0x30
		::System::Int32 tasksLength; // 0x34
		::System::Void _ctor(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise* a1, ::Cysharp::Threading::Tasks::UniTask_Awaiter a2)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise*, ::Cysharp::Threading::Tasks::UniTask_Awaiter))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET))(a1, a2);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

	};
}
