#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net::Http { class HttpClientHandler; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C54A80)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B80)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClientHandler__SendAsync_d__64_TypeDefinitionIndex = 3763;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64>
	struct alignas(8) HttpClientHandler__SendAsync_d__64
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::System::Threading::CancellationTokenRegistration __7__wrap1; // 0x28
		::System::Net::Http::HttpRequestMessage* request; // 0x40
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__4; // 0x48
		::System::IO::Stream* _stream_5__3; // 0x50
		::System::Object* __u__3; // 0x58
		::System::Byte _padding1[0x8];
		::System::Net::HttpWebResponse* _wresponse_5__4; // 0x68
		::System::Threading::CancellationToken cancellationToken; // 0x70
		::System::Object* __u__2; // 0x78
		::System::Byte _padding2[0x8];
		::System::Net::Http::HttpContent* _content_5__2; // 0x88
		::System::Net::HttpWebRequest* _wrequest_5__1; // 0x90
		::System::Net::Http::HttpClientHandler* __4__this; // 0x98
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0xA0
		::System::Int32 __1__state; // 0xB0
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SENDASYNC_D__64_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
