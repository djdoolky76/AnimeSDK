#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
class JHOCADLMHCA;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA__GETSHEETVALUESV2_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10BB0)
#define JHOCADLMHCA__GETSHEETVALUESV2_D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10BC0)

inline static constexpr unsigned int JHOCADLMHCA__GetSheetValuesV2_d__8_TypeDefinitionIndex = 50039;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	struct alignas(8) JHOCADLMHCA__GetSheetValuesV2_d__8
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::System::String* docID; // 0x18
		::System::String* rangeAddress; // 0x20
		::System::String* sheetID; // 0x28
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Byte _padding0[0x10];
		::JHOCADLMHCA* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUESV2_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA__GETSHEETVALUESV2_D__8_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
