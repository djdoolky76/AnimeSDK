#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F159C10)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F159F60)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1597F0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IASYNCCLICKEVENTHANDLER_ONCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x1F159D10)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F159D80)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F159E40)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F159F40)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F159EF0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F159CC0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F159B60)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_ONINVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x1F159AE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnityEventHandler_TypeDefinitionIndex = 39410;

	class AsyncUnityEventHandler : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x18
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x20
		::System::Byte _padding0[0x18];
		::UnityEngine::Events::UnityAction* action; // 0x40
		::System::Threading::CancellationTokenRegistration registration; // 0x48
		::System::Boolean callOnce; // 0x60
		::System::Boolean isDisposed; // 0x61
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncUnityEventHandler")->GetStaticField(0x31A50);
		}

		::System::Void _ctor(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::UniTask OnInvokeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_ONINVOKEASYNC_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_INVOKE_OFFSET))(this);
		}

		static ::System::Void CancellationCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CANCELLATIONCALLBACK_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_DISPOSE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_IAsyncClickEventHandler_OnClickAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IASYNCCLICKEVENTHANDLER_ONCLICKASYNC_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

	};
}
