#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/MobileAuthenticatedStream_OperationType.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C59DE0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10BC0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream__StartOperation_d__58_TypeDefinitionIndex = 2439;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58>
	struct alignas(8) MobileAuthenticatedStream__StartOperation_d__58
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x8];
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x20
		::Mono::Net::Security::AsyncProtocolRequest* asyncRequest; // 0x28
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Byte _padding1[0x10];
		::System::Threading::CancellationToken cancellationToken; // 0x48
		::Mono::Net::Security::MobileAuthenticatedStream_OperationType type; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
