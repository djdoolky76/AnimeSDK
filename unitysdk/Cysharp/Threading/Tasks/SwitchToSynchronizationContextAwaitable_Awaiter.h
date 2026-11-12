#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x203D5710)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_CCTOR_OFFSET UNITYSDK_OFFSET(0x203D5750)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_CTOR_OFFSET UNITYSDK_OFFSET(0x13290)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3EADD10)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x305E7C0)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3EAE030)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3EAE040)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToSynchronizationContextAwaitable_Awaiter_TypeDefinitionIndex = 39301;

	struct alignas(8) SwitchToSynchronizationContextAwaitable_Awaiter
	{
		::System::Threading::SynchronizationContext* synchronizationContext; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		static ::System::Threading::SendOrPostCallback** StaticGet_switchToCallback()
		{
			return (::System::Threading::SendOrPostCallback**)UnitySDK::FromName("Cysharp.Threading.Tasks", "Awaiter")->GetStaticField(0x37820);
		}

		::System::Void _ctor(::System::Threading::SynchronizationContext* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}

		static ::System::Void Callback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_AWAITER_CALLBACK_OFFSET))(a1);
		}

	};
}
