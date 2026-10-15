#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnScrollHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1380F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F137D30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F137C50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F137F70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET UNITYSDK_OFFSET(0x1F137D90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1F137BE0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncScrollTrigger_TypeDefinitionIndex = 38645;

	class AsyncScrollTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IScrollHandler_OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnScrollAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnScrollAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_1_OFFSET))(this, a1);
		}

	};
}
