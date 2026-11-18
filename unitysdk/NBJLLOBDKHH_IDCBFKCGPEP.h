#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EKFPPMNCGPE;
class NBJLLOBDKHH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define NBJLLOBDKHH_IDCBFKCGPEP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E96F0)
#define NBJLLOBDKHH_IDCBFKCGPEP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NBJLLOBDKHH_IDCBFKCGPEP_TypeDefinitionIndex = 46248;

struct alignas(8) NBJLLOBDKHH_IDCBFKCGPEP
{
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x40
	::Cysharp::Threading::Tasks::UniTask JDFPNCKBEIA; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 EBAHIAACBEJ; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_IDCBFKCGPEP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_IDCBFKCGPEP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
