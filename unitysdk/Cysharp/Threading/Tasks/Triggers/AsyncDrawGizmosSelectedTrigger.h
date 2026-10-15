#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDrawGizmosSelectedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12D6F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F12D380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12D2E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F12D580)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x1F12D3E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1F12D2D0)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncDrawGizmosSelectedTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* GetOnDrawGizmosSelectedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* GetOnDrawGizmosSelectedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosSelectedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosSelectedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_1_OFFSET))(this, a1);
		}

	};
}
