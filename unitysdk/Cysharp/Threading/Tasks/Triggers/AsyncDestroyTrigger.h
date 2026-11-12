#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x203DD610)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203DD810)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x203C70E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROYASYNC_OFFSET UNITYSDK_OFFSET(0x203DD660)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x203DD620)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_TypeDefinitionIndex = 39424;

	class AsyncDestroyTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean awakeCalled; // 0x18
		::System::Boolean called; // 0x19
		::System::Byte _padding0[0x6];
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDestroyAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROYASYNC_OFFSET))(this);
		}

	};
}
