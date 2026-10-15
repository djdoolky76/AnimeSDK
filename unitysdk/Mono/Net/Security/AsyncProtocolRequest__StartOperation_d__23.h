#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class AsyncProtocolResult; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5A4F0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B00)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest__StartOperation_d__23_TypeDefinitionIndex = 2427;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	struct alignas(8) AsyncProtocolRequest__StartOperation_d__23
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*> __t__builder; // 0x18
		::System::Byte _padding0[0x10];
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
