#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMoveHandler; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F132830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F132470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F132390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1326B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x1F1324D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1F132320)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMoveTrigger_TypeDefinitionIndex = 38633;

	class AsyncMoveTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IMoveHandler_OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMoveAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMoveAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_1_OFFSET))(this, a1);
		}

	};
}
