#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncFixedUpdateHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203DFDF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_1_OFFSET UNITYSDK_OFFSET(0x203DFC80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x203DFAE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x203DF9C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203DFA80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203DF9D0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncFixedUpdateTrigger_TypeDefinitionIndex = 39434;

	class AsyncFixedUpdateTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler* GetFixedUpdateAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler* GetFixedUpdateAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask FixedUpdateAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask FixedUpdateAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_1_OFFSET))(this, a1);
		}

	};
}
