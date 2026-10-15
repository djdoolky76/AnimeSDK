#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks { class UniTask_DelayPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F147EA0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F141DB0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F147FA0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F147FB0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F1481B0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1F147E90)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F148330)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F1482D0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1F148110)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F148280)

namespace Cysharp::Threading::Tasks
{
	class UniTask_DelayPromise : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x18
		::System::Byte _padding0[0x20];
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x40
		::Cysharp::Threading::Tasks::UniTask_DelayPromise* nextNode; // 0x58
		::System::Int32 initialFrame; // 0x60
		::System::Single delayTimeSpan; // 0x64
		::System::Boolean cancelImmediately; // 0x68
		::System::Byte _padding1[0x3];
		::System::Single elapsed; // 0x6C
		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks", "DelayPromise")->GetStaticField(0x466F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_DelayPromise* get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_DelayPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16 a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_TRYRETURN_OFFSET))(this);
		}

	};
}
