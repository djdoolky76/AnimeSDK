#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStay2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13E1E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F13DE20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F13DD40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F13E060)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x1F13DE80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1F13DCD0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStay2DTrigger_TypeDefinitionIndex = 38609;

	class AsyncTriggerStay2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerStay2D(::UnityEngine::Collider2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnTriggerStay2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTriggerStay2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_1_OFFSET))(this, a1);
		}

	};
}
