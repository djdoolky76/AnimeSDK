#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EKFPPMNCGPE;
class NBJLLOBDKHH;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NBJLLOBDKHH_JEFAIHBPDBK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EF1C0)
#define NBJLLOBDKHH_JEFAIHBPDBK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NBJLLOBDKHH_JEFAIHBPDBK_TypeDefinitionIndex = 46245;

struct alignas(8) NBJLLOBDKHH_JEFAIHBPDBK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::String* LIPIPGHBHFH; // 0x38
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x40
	::System::Single PJNMMCEGENN; // 0x48
	::System::Single OBKMIEMMGIA; // 0x4C
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JEFAIHBPDBK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JEFAIHBPDBK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
