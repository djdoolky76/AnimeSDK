#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPreCullHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F17BCE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F17B970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F17B8D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F17BB70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET UNITYSDK_OFFSET(0x1F17B9D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULL_OFFSET UNITYSDK_OFFSET(0x1F17B8C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPreCullTrigger_TypeDefinitionIndex = 39510;

	class AsyncPreCullTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnPreCull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULL_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* GetOnPreCullAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* GetOnPreCullAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreCullAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreCullAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_1_OFFSET))(this, a1);
		}

	};
}
