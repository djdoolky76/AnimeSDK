#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnJointBreakHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x20031A80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x200319D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_1_OFFSET UNITYSDK_OFFSET(0x20031C40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_OFFSET UNITYSDK_OFFSET(0x20031AE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAK_OFFSET UNITYSDK_OFFSET(0x200319C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x20031D50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncJointBreakTrigger_TypeDefinitionIndex = 31440;

	class AsyncJointBreakTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnJointBreak(::System::Single breakForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAK_OFFSET))(this, breakForce);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* GetOnJointBreakAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* GetOnJointBreakAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Single> OnJointBreakAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Single> OnJointBreakAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
