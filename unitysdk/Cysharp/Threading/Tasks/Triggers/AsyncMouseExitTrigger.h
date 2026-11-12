#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseExitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203E2630)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203E22C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203E2210)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x203E24C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET UNITYSDK_OFFSET(0x203E2320)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x203E2200)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseExitTrigger_TypeDefinitionIndex = 39492;

	class AsyncMouseExitTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnMouseExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseExitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_1_OFFSET))(this, a1);
		}

	};
}
