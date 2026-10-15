#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerExitHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1353B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F134FF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F134F10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F135230)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x1F135050)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1F134EA0)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncPointerExitTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnPointerExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPointerExitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_1_OFFSET))(this, a1);
		}

	};
}
