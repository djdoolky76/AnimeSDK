#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace Cysharp::Threading::Tasks { class UniTask_WhenAnyPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1441F0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F14C9E0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F14C810)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14C8C0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F14C970)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F14C6D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14C990)

namespace Cysharp::Threading::Tasks
{
	class UniTask_WhenAnyPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Int32> core; // 0x10
		::System::Byte _padding0[0x20];
		::System::Int32 completedCount; // 0x38
		::System::Void _ctor(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise* a1, ::Cysharp::Threading::Tasks::UniTask_Awaiter a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise*, ::Cysharp::Threading::Tasks::UniTask_Awaiter, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_TRYINVOKECONTINUATION_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetResult(::System::Int16 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

	};
}
