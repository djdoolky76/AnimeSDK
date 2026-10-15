#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCanvasGroupChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F132C70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F132900)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F132860)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F132B00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1F132960)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1F132850)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncOnCanvasGroupChangedTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnCanvasGroupChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnCanvasGroupChangedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_1_OFFSET))(this, a1);
		}

	};
}
