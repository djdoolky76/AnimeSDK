#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueTuple_2.h"
class JHOCADLMHCA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__LISTSHEETS_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B70)
#define JHOCADLMHCA__LISTSHEETS_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10AE0)

inline static constexpr unsigned int JHOCADLMHCA__ListSheets_d__11_TypeDefinitionIndex = 50041;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(8) JHOCADLMHCA__ListSheets_d__11
	{
		::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x10
		::System::String* docID; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*> __t__builder; // 0x20
		::System::Byte _padding0[0x10];
		::System::Object* __u__3; // 0x38
		::System::Byte _padding1[0x8];
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x48
		::System::Object* __u__2; // 0x50
		::System::Byte _padding2[0x8];
		::JHOCADLMHCA* __4__this; // 0x60
		::System::Net::Http::HttpClient* _client_5__3; // 0x68
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
