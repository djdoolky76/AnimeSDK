#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageOpcode.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8DF3C0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__SendFrameFallbackAsync_d__55_TypeDefinitionIndex = 3876;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55>
	struct alignas(8) ManagedWebSocket__SendFrameFallbackAsync_d__55
	{
		::System::ArraySegment_1<::System::Byte> payloadBuffer; // 0x10
		::System::Byte _padding0[0x8];
		::System::Threading::CancellationTokenRegistration __7__wrap1; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x50
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x58
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Boolean endOfMessage; // 0x74
		::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode; // 0x75

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__SENDFRAMEFALLBACKASYNC_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
