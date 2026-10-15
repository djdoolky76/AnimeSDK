#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
class JHOCADLMHCA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__GETSHEETVALUESRAW_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B90)
#define JHOCADLMHCA__GETSHEETVALUESRAW_D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10BA0)

inline static constexpr unsigned int JHOCADLMHCA__GetSheetValuesRaw_d__5_TypeDefinitionIndex = 50038;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) JHOCADLMHCA__GetSheetValuesRaw_d__5
	{
		::System::Object* __u__2; // 0x10
		::System::Byte _padding0[0x8];
		::System::Object* __u__3; // 0x20
		::System::Byte _padding1[0x8];
		::System::String* docID; // 0x30
		::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x38
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x40
		::JHOCADLMHCA* __4__this; // 0x48
		::System::Net::Http::HttpClient* _client_5__3; // 0x50
		::System::String* range; // 0x58
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x60
		::System::Byte _padding2[0x10];
		::System::Int32 __1__state; // 0x78
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUESRAW_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUESRAW_D__5_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
