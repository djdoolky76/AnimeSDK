#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
class JHOCADLMHCA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__GETSHEETVALUESV2RAW_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14870)
#define JHOCADLMHCA__GETSHEETVALUESV2RAW_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14880)

inline static constexpr unsigned int JHOCADLMHCA__GetSheetValuesV2Raw_d__9_TypeDefinitionIndex = 51088;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	struct alignas(8) JHOCADLMHCA__GetSheetValuesV2Raw_d__9
	{
		::System::String* docID; // 0x10
		::JHOCADLMHCA* __4__this; // 0x18
		::System::Net::Http::HttpClient* _client_5__3; // 0x20
		::System::String* sheetID; // 0x28
		::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x30
		::System::String* rangeAddress; // 0x38
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x40
		::System::Object* __u__3; // 0x48
		::System::Byte _padding0[0x8];
		::System::Object* __u__2; // 0x58
		::System::Byte _padding1[0x8];
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x68
		::System::Byte _padding2[0x10];
		::System::Int32 __1__state; // 0x80
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUESV2RAW_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUESV2RAW_D__9_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
