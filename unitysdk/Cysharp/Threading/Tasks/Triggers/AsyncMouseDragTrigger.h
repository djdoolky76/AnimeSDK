#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseDragHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203E1D90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203E1A20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203E1970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x203E1C20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x203E1A80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x203E1960)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseDragTrigger_TypeDefinitionIndex = 39488;

	class AsyncMouseDragTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnMouseDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* GetOnMouseDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* GetOnMouseDragAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseDragAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_1_OFFSET))(this, a1);
		}

	};
}
