#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerExit2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13A9A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F13A5E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F13A500)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F13A820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x1F13A640)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1F13A490)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncTriggerExit2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* GetOnTriggerExit2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* GetOnTriggerExit2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnTriggerExit2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTriggerExit2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_1_OFFSET))(this, a1);
		}

	};
}
