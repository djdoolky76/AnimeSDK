#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EKFPPMNCGPE;
class NBJLLOBDKHH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NBJLLOBDKHH_AAPBLBMGGIC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EF1B0)
#define NBJLLOBDKHH_AAPBLBMGGIC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NBJLLOBDKHH_AAPBLBMGGIC_TypeDefinitionIndex = 46242;

struct alignas(8) NBJLLOBDKHH_AAPBLBMGGIC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AAPBLBMGGIC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AAPBLBMGGIC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
