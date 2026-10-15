#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/HttpCompletionOption.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C54A70)
#define SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10BC0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClient__SendAsyncWorker_d__47_TypeDefinitionIndex = 3760;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47>
	struct alignas(8) HttpClient__SendAsyncWorker_d__47
	{
		::System::Net::Http::HttpRequestMessage* request; // 0x10
		::System::Net::Http::HttpResponseMessage* _response_5__1; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Byte _padding0[0x10];
		::System::Object* __u__1; // 0x48
		::System::Byte _padding1[0x8];
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::Net::Http::HttpClient* __4__this; // 0x60
		::System::Threading::CancellationTokenSource* _lcts_5__2; // 0x68
		::System::Net::Http::HttpCompletionOption completionOption; // 0x70
		::System::Int32 __1__state; // 0x74
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__SENDASYNCWORKER_D__47_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
