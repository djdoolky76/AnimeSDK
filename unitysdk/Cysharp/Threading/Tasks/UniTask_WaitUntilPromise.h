#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks { class UniTask_WaitUntilPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14B400)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F1430B0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14B500)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F14B510)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14B710)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1F14B3F0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F14B890)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F14B830)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1F14B670)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14B7E0)

namespace Cysharp::Threading::Tasks
{
	class UniTask_WaitUntilPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x10
		::System::Byte _padding0[0x20];
		::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise* nextNode; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x48
		::System::Func_1<::System::Boolean>* predicate; // 0x60
		::System::Boolean cancelImmediately; // 0x68
		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks", "WaitUntilPromise")->GetStaticField(0x471D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise* get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Func_1<::System::Boolean>* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16 a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_TRYRETURN_OFFSET))(this);
		}

	};
}
