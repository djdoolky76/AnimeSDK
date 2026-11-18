#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net::Security { class SslStream; }
namespace System::Net::WebSockets { class ClientWebSocketOptions; }
namespace System::Net::WebSockets { class WebSocketHandle; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8CFFD0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x8CFFE0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ConnectAsyncCore_d__24_TypeDefinitionIndex = 3892;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	struct alignas(8) WebSocketHandle__ConnectAsyncCore_d__24
	{
		::System::Uri* uri; // 0x10
		::System::Net::WebSockets::WebSocketHandle* __4__this; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::Object* __u__1; // 0x28
		::System::Byte _padding0[0x8];
		::System::Threading::CancellationTokenRegistration _registration_5__4; // 0x38
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x50
		::System::Net::WebSockets::ClientWebSocketOptions* options; // 0x60
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> _secKeyAndSecWebSocketAccept_5__3; // 0x68
		::System::Byte _padding1[0x8];
		::System::Object* __u__3; // 0x78
		::System::Byte _padding2[0x8];
		::System::Net::Security::SslStream* _sslStream_5__1; // 0x88
		::System::IO::Stream* _stream_5__2; // 0x90
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x98
		::System::Int32 __1__state; // 0xB0

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
