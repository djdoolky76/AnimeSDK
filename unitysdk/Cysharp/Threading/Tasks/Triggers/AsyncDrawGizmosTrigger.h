#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDrawGizmosHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12DB30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F12D7C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12D720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F12D9C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET UNITYSDK_OFFSET(0x1F12D820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1F12D710)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDrawGizmosTrigger_TypeDefinitionIndex = 38545;

	class AsyncDrawGizmosTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOS_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* GetOnDrawGizmosAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* GetOnDrawGizmosAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_1_OFFSET))(this, a1);
		}

	};
}
