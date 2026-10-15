#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
class JHOCADLMHCA;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__GETSHEETVALUES_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B70)
#define JHOCADLMHCA__GETSHEETVALUES_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B80)

inline static constexpr unsigned int JHOCADLMHCA__GetSheetValues_d__4_TypeDefinitionIndex = 50037;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) JHOCADLMHCA__GetSheetValues_d__4
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::JHOCADLMHCA* __4__this; // 0x28
		::System::String* range; // 0x30
		::System::String* docID; // 0x38
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUES_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUES_D__4_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
