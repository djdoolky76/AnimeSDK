#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleSystemStoppedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1335E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F133270)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1331D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F133470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET UNITYSDK_OFFSET(0x1F1332D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET UNITYSDK_OFFSET(0x1F1331C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncParticleSystemStoppedTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnParticleSystemStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleSystemStoppedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleSystemStoppedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_1_OFFSET))(this, a1);
		}

	};
}
