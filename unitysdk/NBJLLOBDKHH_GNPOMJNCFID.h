#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EKFPPMNCGPE;
class NBJLLOBDKHH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NBJLLOBDKHH_GNPOMJNCFID_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6306E0)
#define NBJLLOBDKHH_GNPOMJNCFID_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NBJLLOBDKHH_GNPOMJNCFID_TypeDefinitionIndex = 46244;

struct alignas(8) NBJLLOBDKHH_GNPOMJNCFID
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask JDFPNCKBEIA; // 0x38
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x48
	::System::Int32 EBAHIAACBEJ; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GNPOMJNCFID_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GNPOMJNCFID_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
