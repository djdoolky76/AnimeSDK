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

#define JHOCADLMHCA__UPDATESHEET_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10C10)
#define JHOCADLMHCA__UPDATESHEET_D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10C20)

inline static constexpr unsigned int JHOCADLMHCA__UpdateSheet_d__10_TypeDefinitionIndex = 50042;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	struct alignas(8) JHOCADLMHCA__UpdateSheet_d__10
	{
		::System::String* rangeAddress; // 0x10
		::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x18
		::System::String* docID; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x28
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x40
		::System::String* resource; // 0x48
		::System::String* sheetID; // 0x50
		::System::Object* __u__3; // 0x58
		::System::Byte _padding0[0x8];
		::System::Object* __u__2; // 0x68
		::System::Byte _padding1[0x8];
		::System::Net::Http::HttpClient* _client_5__3; // 0x78
		::JHOCADLMHCA* __4__this; // 0x80
		::System::Int32 __1__state; // 0x88
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__UPDATESHEET_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__UPDATESHEET_D__10_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
