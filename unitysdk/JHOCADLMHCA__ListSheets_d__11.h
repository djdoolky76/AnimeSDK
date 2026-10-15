#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueTuple.h"
class JHOCADLMHCA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__LISTSHEETS_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10BF0)
#define JHOCADLMHCA__LISTSHEETS_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10C00)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(8) JHOCADLMHCA__ListSheets_d__11
	{
		::System::Net::Http::HttpClient* _client_5__3; // 0x10
		::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x18
		::System::Object* __u__2; // 0x20
		::System::Byte _padding0[0x8];
		::System::Object* __u__3; // 0x30
		::System::Byte _padding1[0x8];
		::JHOCADLMHCA* __4__this; // 0x40
		::System::String* docID; // 0x48
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x50
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x58
		::System::Byte _padding2[0x10];
		::System::Int32 __1__state; // 0x70
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__LISTSHEETS_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__LISTSHEETS_D__11_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
