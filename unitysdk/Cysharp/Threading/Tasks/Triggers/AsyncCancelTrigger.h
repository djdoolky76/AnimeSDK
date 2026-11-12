#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCancelHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203DAD60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203DA9B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203DA8E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_1_OFFSET UNITYSDK_OFFSET(0x203DABE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET UNITYSDK_OFFSET(0x203DAA10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_UNITYENGINE_EVENTSYSTEMS_ICANCELHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x203DA870)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCancelTrigger_TypeDefinitionIndex = 39550;

	class AsyncCancelTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_ICancelHandler_OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_UNITYENGINE_EVENTSYSTEMS_ICANCELHANDLER_ONCANCEL_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnCancelAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnCancelAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_1_OFFSET))(this, a1);
		}

	};
}
