#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBeginDragHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F129740)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F129380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1292A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1295C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x1F1293E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1F129230)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncBeginDragTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnBeginDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnBeginDragAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_1_OFFSET))(this, a1);
		}

	};
}
