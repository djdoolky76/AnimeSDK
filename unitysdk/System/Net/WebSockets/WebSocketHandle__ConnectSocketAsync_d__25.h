#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::WebSockets { class WebSocketHandle; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8D79B0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x8D79C0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ConnectSocketAsync_d__25_TypeDefinitionIndex = 3893;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	struct alignas(8) WebSocketHandle__ConnectSocketAsync_d__25
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x10
		::System::Net::WebSockets::WebSocketHandle* __4__this; // 0x20
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _lastException_5__2; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::Il2CppArray<::System::Net::IPAddress*>* __7__wrap1; // 0x38
		::System::Threading::CancellationTokenRegistration __7__wrap4; // 0x40
		::System::Object* __u__1; // 0x58
		::System::Byte _padding0[0x8];
		::System::Net::Sockets::Socket* _socket_5__1; // 0x68
		::System::Threading::CancellationTokenRegistration __7__wrap3; // 0x70
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*> __t__builder; // 0x88
		::System::Byte _padding1[0x10];
		::System::String* host; // 0xA0
		::System::Int32 __7__wrap2; // 0xA8
		::System::Int32 __1__state; // 0xAC
		::System::Int32 port; // 0xB0

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTSOCKETASYNC_D__25_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
