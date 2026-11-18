#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net::WebSockets { class ManagedWebSocket; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8CC1E0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket__CloseAsyncPrivate_d__66_TypeDefinitionIndex = 3881;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66>
	struct alignas(8) ManagedWebSocket__CloseAsyncPrivate_d__66
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Il2CppArray<::System::Byte>* _closeBuffer_5__1; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Net::WebSockets::ManagedWebSocket* __4__this; // 0x48
		::System::Object* __u__2; // 0x50
		::System::Byte _padding0[0x8];
		::System::String* statusDescription; // 0x60
		::System::Net::WebSockets::WebSocketCloseStatus closeStatus; // 0x68
		::System::Int32 __1__state; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CLOSEASYNCPRIVATE_D__66_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
