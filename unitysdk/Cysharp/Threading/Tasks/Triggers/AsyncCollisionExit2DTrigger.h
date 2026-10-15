#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionExit2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12AC00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F12A840)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12A760)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F12AA80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x1F12A8A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1F12A6F0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionExit2DTrigger_TypeDefinitionIndex = 38535;

	class AsyncCollisionExit2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnCollisionExit2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnCollisionExit2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_1_OFFSET))(this, a1);
		}

	};
}
