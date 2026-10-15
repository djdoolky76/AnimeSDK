#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
class JHOCADLMHCA;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B50)
#define JHOCADLMHCA__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B60)

inline static constexpr unsigned int JHOCADLMHCA__GetDocumentTexts_d__6_TypeDefinitionIndex = 50036;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	struct alignas(8) JHOCADLMHCA__GetDocumentTexts_d__6
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x18
		::System::Byte _padding0[0x10];
		::JHOCADLMHCA* __4__this; // 0x30
		::System::String* docID; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
