#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncLateUpdateHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F102B40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F1027D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F102720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1029D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1F102830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F102710)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncLateUpdateTrigger_TypeDefinitionIndex = 38507;

	class AsyncLateUpdateTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* GetLateUpdateAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* GetLateUpdateAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask LateUpdateAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask LateUpdateAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_1_OFFSET))(this, a1);
		}

	};
}
