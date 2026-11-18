#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EKFPPMNCGPE;
class NBJLLOBDKHH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define NBJLLOBDKHH_AFCJOELNPKE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F8900)
#define NBJLLOBDKHH_AFCJOELNPKE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NBJLLOBDKHH_AFCJOELNPKE_TypeDefinitionIndex = 46243;

struct alignas(8) NBJLLOBDKHH_AFCJOELNPKE
{
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AFCJOELNPKE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AFCJOELNPKE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
