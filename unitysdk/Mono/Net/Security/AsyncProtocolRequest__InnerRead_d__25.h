#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C59D70)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10BC0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest__InnerRead_d__25_TypeDefinitionIndex = 2429;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	struct alignas(8) AsyncProtocolRequest__InnerRead_d__25
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Object* __u__1; // 0x18
		::System::Byte _padding0[0x8];
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x28
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Byte _padding1[0x10];
		::System::Nullable* _totalRead_5__2; // 0x48
		::System::Int32 _requestedSize_5__1; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
