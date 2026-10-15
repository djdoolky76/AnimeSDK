#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace System::Net::Http { class HttpContent; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C551D0)
#define SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B00)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent__LoadIntoBufferAsync_d__17_TypeDefinitionIndex = 3767;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	struct alignas(8) HttpContent__LoadIntoBufferAsync_d__17
	{
		::System::Net::Http::HttpContent* __4__this; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x30
		::System::Int64 maxBufferSize; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__LOADINTOBUFFERASYNC_D__17_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
