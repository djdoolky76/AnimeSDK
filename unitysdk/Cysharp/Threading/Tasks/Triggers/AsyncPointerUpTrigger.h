#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerUpHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1358E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F135520)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F135440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F135760)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET UNITYSDK_OFFSET(0x1F135580)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERUPHANDLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F1353D0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerUpTrigger_TypeDefinitionIndex = 38643;

	class AsyncPointerUpTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERUPHANDLER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnPointerUpAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPointerUpAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_1_OFFSET))(this, a1);
		}

	};
}
