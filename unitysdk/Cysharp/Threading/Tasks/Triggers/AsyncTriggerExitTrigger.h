#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerExitHandler; }
namespace UnityEngine { class Collider; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13AED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F13AB10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F13AA30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F13AD50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x1F13AB70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1F13A9C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncTriggerExitTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnTriggerExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTriggerExitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_1_OFFSET))(this, a1);
		}

	};
}
