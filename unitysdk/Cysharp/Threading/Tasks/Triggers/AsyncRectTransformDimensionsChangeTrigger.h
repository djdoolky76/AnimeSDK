#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRectTransformDimensionsChangeHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203E7990)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203E7620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203E7570)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x203E7820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET UNITYSDK_OFFSET(0x203E7680)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x203E7560)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRectTransformDimensionsChangeTrigger_TypeDefinitionIndex = 39514;

	class AsyncRectTransformDimensionsChangeTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_1_OFFSET))(this, a1);
		}

	};
}
