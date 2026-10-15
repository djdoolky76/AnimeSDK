#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDropHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12E060)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F12DCA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12DBC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F12DEE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET UNITYSDK_OFFSET(0x1F12DD00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDROPHANDLER_ONDROP_OFFSET UNITYSDK_OFFSET(0x1F12DB50)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncDropTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IDropHandler_OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDROPHANDLER_ONDROP_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* GetOnDropAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* GetOnDropAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnDropAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDropAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_1_OFFSET))(this, a1);
		}

	};
}
