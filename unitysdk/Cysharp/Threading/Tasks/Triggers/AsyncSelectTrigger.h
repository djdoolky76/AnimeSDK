#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnSelectHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F138620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F138260)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F138180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1384A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET UNITYSDK_OFFSET(0x1F1382C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1F138110)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncSelectTrigger_TypeDefinitionIndex = 38647;

	class AsyncSelectTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_ISelectHandler_OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnSelectAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnSelectAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_1_OFFSET))(this, a1);
		}

	};
}
