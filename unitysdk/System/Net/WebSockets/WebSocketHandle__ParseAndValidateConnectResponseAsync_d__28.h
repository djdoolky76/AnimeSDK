#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::WebSockets { class ClientWebSocketOptions; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8CB280)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ParseAndValidateConnectResponseAsync_d__28_TypeDefinitionIndex = 3895;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
	struct alignas(8) WebSocketHandle__ParseAndValidateConnectResponseAsync_d__28
	{
		::System::String* _subprotocol_5__5; // 0x10
		::System::IO::Stream* stream; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x20
		::System::Byte _padding0[0x10];
		::System::Net::WebSockets::ClientWebSocketOptions* options; // 0x38
		::System::String* expectedSecWebSocketAccept; // 0x40
		::System::Object* __u__1; // 0x48
		::System::Byte _padding1[0x8];
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::String* _line_5__1; // 0x60
		::System::Boolean _foundUpgrade_5__3; // 0x68
		::System::Boolean _foundConnection_5__2; // 0x69
		::System::Boolean _foundSecWebSocketAccept_5__4; // 0x6A
		::System::Byte _padding2[0x1];
		::System::Int32 __1__state; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__PARSEANDVALIDATECONNECTRESPONSEASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
