#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NJGHEMFKHKK;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NJGHEMFKHKK_JJFMHGDKNDA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CA160)
#define NJGHEMFKHKK_JJFMHGDKNDA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int NJGHEMFKHKK_JJFMHGDKNDA_TypeDefinitionIndex = 71651;

struct alignas(8) NJGHEMFKHKK_JJFMHGDKNDA
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Action* JLMLJIMBKKP; // 0x48
	::NJGHEMFKHKK* KLHPEBKNIFB; // 0x50
	::System::Boolean OKKALHDMJIO; // 0x58
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_JJFMHGDKNDA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_JJFMHGDKNDA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
